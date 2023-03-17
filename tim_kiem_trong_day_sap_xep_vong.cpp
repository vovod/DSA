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
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == x)
                ans = i + 1;
        }
        cout << ans << endl;
    }
}