#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, k, a[100];
bool ok;

void init()
{
    k = 1;
    a[1] = n;
}

void next()
{
    int i = k;
    while (i >= 1 && a[i] == 1)
        i--;
    if (i == 0)
    {
        ok = false;
        return;
    }
    a[i]--;
    int cnt = k - i + 1;
    int q = cnt / a[i], r = cnt % a[i];
    k = i;
    if (q)
    {
        for (int j = 0; j < q; j++)
            a[i + j + 1] = a[i];
        k += q;
    }
    if (r)
    {
        a[k + 1] = r;
        k++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ok = true;
        init();
        while (ok)
        {
            cout << "(";
            for (int i = 1; i <= k; i++)
            {
                cout << a[i];
                if (i == k)
                    cout << ") ";
                else
                    cout << " ";
            }
            next();
        }
        cout << endl;
    }
}