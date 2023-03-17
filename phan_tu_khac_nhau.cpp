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
        ll a[n + 5], b[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            cin >> b[i];
            if (b[i] != a[i] && ans == 0)
            {
                ans = i;
            }
        }
        cout << ans << endl;
    }
}