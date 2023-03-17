#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll power(ll n, ll k)
{
    if (k == 0)
        return 1;
    ll x = power(n, k / 2);
    if (k % 2 == 0)
        return x * x % mod;
    else
        return n * (x * x % mod) % mod;
}
int main()
{
    ll n, k;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
            break;
        else
            cout << power(n, k) << endl;
    }
}