#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            cin >> a[i].second;
        }
        sort(a, a + n, cmp);
        int ans = 1, end_time = a[0].second;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first >= end_time)
            {
                ans++;
                end_time = a[i].second;
            }
        }
        cout << ans << endl;
    }
}