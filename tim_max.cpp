#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long key = 0;
        for (int i = 0; i < n; i++)
        {
            key += i * a[i];
            key %= mod;
        }
        cout << key << endl;
    }
}