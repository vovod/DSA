#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, ok;
int a[1000];

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void next()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}

bool check()
{
    if (a[1] != 1)
        return false;
    if (a[n] != 0)
        return false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            dem++;
        else
        {
            if (dem > 3)
                return false;
            dem = 0;
        }
    }
    if (a[n] == 0)
    {
        if (dem > 3)
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    init();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
                if (a[i] == 0)
                    cout << 6;
                else
                    cout << 8;
            cout << endl;
        }
        next();
    }
}