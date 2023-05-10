#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;
        int y = k - a[i];
        while (left < right)
        {
            if (a[left] + a[right] == y)
            {
                cout << "YES\n";
                return;
            }
            else if (a[left] + a[right] < y)
                left++;
            else
                right--;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}