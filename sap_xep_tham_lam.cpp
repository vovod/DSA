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
        int a[n + 5], b[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] || a[i] == b[n - i - 1])
                continue;
            check++;
        }
        if (check == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}