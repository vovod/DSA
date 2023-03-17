#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll BINARY_SEARCH(ll dp[], ll n, ll key)
{
    ll s = 1;
    ll e = n;
    while (s <= e)
    {
        ll mid = (s + e) / 2;
        if (dp[mid] == key)
            return mid;
        else if (dp[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int key = BINARY_SEARCH(a, n, x);
        if (key == -1)
            cout << "NO" << endl;
        else
            cout << key + 1 << endl;
    }
}