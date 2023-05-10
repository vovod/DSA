#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (abs(a.first) != abs(b.first))
        return abs(a.first) < abs(b.first);
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i].first = x;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), cmp);
        long long res, sum = INT_MAX;
        int idx;
        for (int i = 1; i < n; i++)
        {
            int tmp = abs(a[i].first + a[i - 1].first);
            if (tmp < sum)
            {
                sum = tmp;
                res = a[i].first + a[i - 1].first;
                idx = min(a[i].second, a[i - 1].second);
            }
            else if (tmp == sum)
            {
                if (idx > min(a[i].second, a[i - 1].second))
                {
                    res = a[i].first + a[i - 1].first;
                    idx = min(a[i].second, a[i - 1].second);
                }
            }
        }
        cout << res << endl;
    }
}
