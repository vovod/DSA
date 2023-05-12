#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, a[100], x[100];
vector<vector<int>> v;

void back_track(int i, int pos, int sum)
{
    for (int j = pos; j <= n; j++)
    {
        x[i] = a[j];
        if ((sum + a[j]) % 2 != 0)
        {
            vector<int> tmp;
            for (int k = 1; k <= i; k++)
            {
                tmp.push_back(x[k]);
            }
            v.push_back(tmp);
        }
        if (j + 1 <= n)
            back_track(i + 1, j + 1, sum + a[j]);
    }
}

bool cmp(vector<int> a, vector<int> b)
{
    int i = 0, k = min(a.size(), b.size());
    while (i < k && a[i] == b[i])
        i++;
    if (i < k)
        return a[i] < b[i];
    return a.size() < b.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        back_track(1, 1, 0);
        sort(v.begin(), v.end(), cmp);
        for (auto it : v)
        {
            for (int x : it)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        v.clear();
    }
}