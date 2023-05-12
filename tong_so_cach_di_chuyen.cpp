#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
const long long M = 1e9 + 7;
int f[100005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        memset(f, 0, sizeof(f));
        f[0] = 1;
        f[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= i && j <= k; j++)
                f[i] = (f[i] + f[i - j]) % M;
        }
        cout << f[n] << endl;
    }
}