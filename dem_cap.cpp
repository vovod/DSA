#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long tmp = lower_bound(v.begin(), v.end(), v[i] + k) - v.begin() - i - 1;
            cnt += tmp;
        }
        cout << cnt << endl;
    }
}