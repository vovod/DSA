#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
long long a[1000001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int d = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
                d = i;
        }
        if (d == -1)
            cout << "0\n";
        else
            cout << d + 1 << endl;
    }
}