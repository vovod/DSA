#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    int dp[n + 5] = {1};
    for (int i = 1; i < n; i++)
    {
        int t_max = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                if (dp[j] > t_max)
                    t_max = dp[j];
            }
        }
        dp[i] = t_max + 1;
        if (dp[i] > max)
            max = dp[i];
    }
    cout << max;
}