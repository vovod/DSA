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
        int a[n + 5];
        map<int, int> b;
        map<int, int> c;
        int x = 0;
        int key;
        int min = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
            if (b[a[i]] == 1)
                c[a[i]] = i;
            if (b[a[i]] == 2)
            {
                if (c[a[i]] < min)
                {
                    min = c[a[i]];
                    key = a[i];
                }
                x++;
            }
        }
        if (x == 0)
            cout << "NO\n";
        else
            cout << key << endl;
    }
}