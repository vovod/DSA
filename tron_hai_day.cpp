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
        set<int> a;
        map<int, int> b;
        for (int i = 0; i < n + m; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
            b[x]++;
        }
        for (int i : a)
        {
            for (int j = 0; j < b[i]; j++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}