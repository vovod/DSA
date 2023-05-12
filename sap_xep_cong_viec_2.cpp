#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct job
{
    int id, deadline, profit;
};

bool cmp(job a, job b)
{
    return a.profit > b.profit;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        job a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].id >> a[i].deadline >> a[i].profit;
        }
        sort(a, a + n, cmp);
        bool visited[n] = {0};
        int res[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = min(a[i].deadline - 1, n - 1); j >= 0; j--)
            {
                if (visited[j] == 0)
                {
                    visited[j] = 1;
                    res[j] = i;
                    break;
                }
            }
        }
        int dem = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                dem++;
                ans += a[res[i]].profit;
            }
        }
        cout << dem << " " << ans << endl;
    }
}