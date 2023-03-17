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
        int m, n, k;
        cin >> m >> n >> k;
        int a[m + 5], b[n + 5];
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int dem1 = 1, dem2 = 1;
        int ans;
        for (int i = 0; i <= m + n; i++)
        {
            k--;
            if (a[dem1] < b[dem2])
            {
                ans = a[dem1];
                dem1++;
            }
            else
            {
                ans = b[dem2];
                dem2++;
            }
            if (k == 0)
                break;
        }
        cout << ans << endl;
    }
}