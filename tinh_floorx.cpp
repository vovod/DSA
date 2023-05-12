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
        int vt = -1;
        for (int i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            if (k <= x)
                vt = i + 1;
        }
        cout << vt << endl;
    }
}