#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, w, x[100], res = 0;
vector<int> v;
pair<int, int> a[100];
void ql(int i, int b, int sum)
{
    if (i == n + 1)
    {
        if (sum > res)
        {
            res = sum;
            v.clear();
            for (int j = 1; j <= n; j++)
                v.push_back(x[j]);
        }
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        if (b + j * a[i].second <= w)
        {
            x[i] = j;
            ql(i + 1, b + j * a[i].second, sum + j * a[i].first);
        }
    }
}
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> a[i].first;
    for (int i = 1; i <= n; i++)
        cin >> a[i].second;
    ql(1, 0, 0);
    cout << res << endl;
    for (int x : v)
        cout << x << " ";
}