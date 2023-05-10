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
        vector<vector<int>> v(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
            sort(v[i].begin(), v[i].end());
        for (int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for (int x : v[i])
                cout << x << " ";
            cout << endl;
        }
    }
}