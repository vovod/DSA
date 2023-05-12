#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    for (int y = n / 7; y >= 0; y--)
    {
        if ((n - 7 * y) % 4 == 0)
        {
            int x = (n - 7 * y) / 4;
            for (int i = 0; i < x; i++)
                cout << "4";
            for (int i = 0; i < y; i++)
                cout << "7";
            cout << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}