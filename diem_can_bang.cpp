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
        int a[n + 5] = {0};
        int sr = 0, sl = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sr += a[i];
        }
        int key = 1;
        int dem = 0;
        while (key != n+1)
        {
            if (sl == sr && key != 1)
            {
                dem = 1;
                break;
            }
            sl += a[key - 1];
            sr -= a[key];
            key++;
        }
        if (dem == 1)
            cout << key-1 << endl;
        else
            cout << -1 << endl;
    }
}