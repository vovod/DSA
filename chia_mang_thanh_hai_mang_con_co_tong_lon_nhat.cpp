#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        ll sum = 0, sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (i < n - k)
                sum1 += a[i];
            if (i < k)
                sum2 += a[i];
        }
        cout << max(sum - sum2 * 2, sum - sum1 * 2) << endl;
    }
}