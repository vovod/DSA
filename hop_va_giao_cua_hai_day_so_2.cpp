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
        int m, n;
        cin >> m >> n;
        int a[m + 5], b[n + 5];
        vector<int> c;
        map<int, int> d;
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            d[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s.insert(b[i]);
            d[b[i]]++;
        }

        for (int i : s)
            cout << i << " ";
        cout << endl;
        for (int i : s)
        {
            if (d[i] > 1)
            {
                cout << i << " ";
                d[i] = 0;
            }
        }
        cout << endl;
    }
}