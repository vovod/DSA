#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void solve()
{
    int s, d;
    cin >> s >> d;
    if (s > 9 * d)
    {
        cout << "-1\n";
    }
    else
    {
        int a[d];
        s--; // để lại 1 chữ số đầu tiên
        for (int i = d - 1; i > 0; i--)
        {
            if (s >= 9)
            {
                a[i] = 9;
                s -= 9;
            }
            else
            {
                a[i] = s;
                s = 0;
            }
        }
        a[0] = s + 1;
        for (int i = 0; i < d; i++)
            cout << a[i];
        cout << endl;
    }
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