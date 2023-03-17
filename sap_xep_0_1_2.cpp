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
        int dem1 = 0, dem2 = 0, dem0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                dem0++;
            if (a[i] == 1)
                dem1++;
            if (a[i] == 2)
                dem2++;
        }
        for (int i = 0; i < dem0; i++)
            cout << "0 ";
        for (int i = 0; i < dem1; i++)
            cout << "1 ";
        for (int i = 0; i < dem2; i++)
            cout << "2 ";
        cout << endl;
    }
}