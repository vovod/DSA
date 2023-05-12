#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, k, a[100][100], x[100], ok;

void inp()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
        x[i] = i;
    }
}

void next()
{
    int i = n - 1;
    while (i >= 1 && x[i] > x[i + 1])
        i--;
    if (i == 0)
    {
        ok = 0;
        return;
    }
    int j = n;
    while (x[i] > x[j])
        j--;
    swap(x[i], x[j]);
    sort(x + i + 1, x + n + 1);
}

bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i][x[i]];
    if (sum == k)
        return true;
    return false;
}

int main()
{
    inp();
    ok = 1;
    vector<vector<int>> v;
    while (ok)
    {
        vector<int> tmp;
        if (check())
        {
            for (int i = 1; i <= n; i++)
                tmp.push_back(x[i]);
            v.push_back(tmp);
        }
        next();
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int x : v[i])
            cout << x << " ";
        cout << endl;
    }
}