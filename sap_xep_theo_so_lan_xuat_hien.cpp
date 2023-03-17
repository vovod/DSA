#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
map<int, int> c;
int cmp(int a, int b)
{
    return c[a] > c[b];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        c.clear();
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i]]++;
        }
        sort(a, a + n);
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}