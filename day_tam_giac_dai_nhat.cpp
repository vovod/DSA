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
        int dp1[n + 5];
        int dp2[n + 5];
        dp1[0] = dp2[n - 1] = 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                dp1[i] = dp1[i - 1] + 1;
            else
                dp1[i] = 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
                dp2[i] = dp2[i + 1] + 1;
            else
                dp2[i] = 1;
        }
        int key = 0;
        for (int i = 0; i < n; i++)
            key = max(key, dp1[i] + dp2[i] - 1);
        cout << key << endl;
    }
}