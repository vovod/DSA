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
        ll n;
        cin >> n;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            while (x > 0)
            {
                a.insert(x % 10);
                x = x / 10;
            }
        }
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}