#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dp[n + 5] = {0};
        int key = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    dp[i] = max(dp[i], dp[j] + a[i]);
                }
            }
            key = max(dp[i], key);
        }
        cout << key << endl;
    }
}