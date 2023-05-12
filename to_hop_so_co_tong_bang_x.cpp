#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, s, a[101], x[101], ok;
vector<vector<int>> v;
int dem = 0;

void inp()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
}

void back_track(int pos, int sum, int cnt)
{
    if (sum == s)
    {
        vector<int> v1;
        for (int i = 0; i < cnt; i++)
        {
            v1.push_back(x[i]);
        }
        dem++;
        v.push_back(v1);
        ok = 1;
        return;
    }
    for (int j = pos; j <= n; j++)
    {
        if (a[j] + sum <= s)
        {
            x[cnt] = a[j];
            back_track(j, sum + a[j], cnt + 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        ok = 0;
        dem = 0;
        back_track(1, 0, 0);
        if (ok == 0)
            cout << "-1\n";
        else
        {
            cout << dem;
            for (auto x : v)
            {
                cout << " {";
                for (int i = 0; i < x.size(); i++)
                {
                    cout << x[i];
                    if (i != x.size() - 1)
                        cout << " ";
                }
                cout << "}";
            }
            cout << endl;
        }
        v.clear();
    }
}