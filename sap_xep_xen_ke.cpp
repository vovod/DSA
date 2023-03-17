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
        int b[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int dem1 = 0, dem2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << b[dem1] << " ";
                dem1++;
            }
            else
            {
                cout << a[dem2] << " ";
                dem2++;
            }
        }
        cout << endl;
    }
}