#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, k, ok;
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
    int dem = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            dem++;
        else
        {
            if (dem > k)
                return false;
            if (dem == k)
                cnt++;
            dem = 0;
        }
    }
    if (a[n] == 0)
    {
        if (dem > k)
            return false;
        if (dem == k)
            cnt++;
    }
    return cnt == 1;
}
int main()
{
    cin >> n >> k;
    int cnt = 0;
    ok = 1;
    init();
    vector<string> v;
    while (ok)
    {
        if (check())
        {
            cnt++;
            string tmp = "";
            for (int i = 1; i <= n; i++)
            {
                if (!a[i])
                    tmp += "A";
                else
                    tmp += "B";
            }
            v.push_back(tmp);
        }
        next();
    }
    cout << cnt << endl;
    for (string x : v)
        cout << x << endl;
}