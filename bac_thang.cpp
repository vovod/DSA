#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll thang[100001] = {0};
ll kq(int n, int k)
{
    thang[0] = 1;
    if (n <= 1 || k == 1)
        return 1;
    ll sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum = sum % mod + thang[i - 1] % mod;
        thang[i] = sum;
    }
    if (n <= k)
        return thang[n];
    for (int i = k + 1; i <= n; ++i)
    {
        thang[i] = (2 * thang[i - 1] % mod - thang[i - k - 1] % mod + mod) % mod;
    }
    return thang[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << kq(n, k) << endl;
    }
}