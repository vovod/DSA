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
        int a[n + 3], f[n + 3] = {};
        for (int i = 3; i <= n + 2; i++)
        {
            cin >> a[i];
            f[i] = max(f[i - 2], f[i - 3]) + a[i];
        }
        cout << max(f[n + 1], f[n + 2]) << endl;
    }
}