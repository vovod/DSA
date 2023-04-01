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
        int n, m;
        cin >> n >> m;
        ll min = 1e9;
        ll max = -min;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > max)
                max = x;
        }
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            if (x < min)
                min = x;
        }
        cout << min * max << endl;
    }
}