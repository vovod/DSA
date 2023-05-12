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
        vector<string> v;
        while (ok)
        {
            string tmp = "(";
            for (int i = 1; i <= k; i++)
            {
                tmp += to_string(a[i]);
                if (i == k)
                    tmp += ") ";
                else
                    tmp += " ";
            }
            v.push_back(tmp);
            next();
        }
        cout << v.size() << endl;
        for (string x : v)
            cout << x;
        cout << endl;
    }
}