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
        string a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        string le = "";
        string chan = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                chan += a[i];
            else
            {
                le += a[i];
            }
        }
        ll sum = stoll(chan) + stoll(le);
        cout << sum << endl;
    }
}