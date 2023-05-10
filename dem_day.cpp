#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
const int MOD = 123456789;

long long bipow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long tmp = bipow(a, b / 2);
    if (b % 2 == 1)
        return (((tmp % MOD) * (tmp % MOD)) % MOD * (a % MOD)) % MOD;
    else
        return (tmp % MOD) * (tmp % MOD) % MOD;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << bipow(2, n - 1) << endl;
    }
}