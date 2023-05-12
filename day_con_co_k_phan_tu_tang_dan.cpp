#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, x[101], a[101], ans, k, ok;

void next()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
            a[i] = i;
        }
        sort(x + 1, x + n + 1);
        ok = 1;
        while (ok)
        {
            for (int i = 1; i <= k; i++)
                cout << x[a[i]] << " ";
            cout << endl;
            next();
        }
    }
}