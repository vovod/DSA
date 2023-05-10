#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, a[100001], vt[100001], b[100001];

int main()
{
    cin >> n;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vt[a[i] - 1] = i;
    }
    int res = 1;
    b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (vt[i] > vt[i - 1])
            b[i] = b[i - 1] + 1;
        else
        {
            b[i] = 1;
        }
        res = max(res, b[i]);
    }
    cout << n - res;
}