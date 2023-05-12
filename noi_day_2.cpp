#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
const long long MOD = (long long)1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(v[i]);
        }
        long long sum = 0;
        while (pq.size() > 1)
        {
            long long top1 = pq.top();
            pq.pop();
            long long top2 = pq.top();
            pq.pop();
            sum = (sum + top1 + top2) % MOD;
            pq.push((top1 + top2) % MOD);
        }
        cout << sum << endl;
    }
}