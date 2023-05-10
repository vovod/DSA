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
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        long long cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int l = i + 1, r = n - 1, s = k - a[i];
            while (l <= r)
            {
                while (l < r && a[r] + a[l] >= s)
                    r--;
                cnt += (r - l);
                l++;
            }
        }
        cout << cnt << endl;
    }
}