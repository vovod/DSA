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
    for (int &x : a)
        cin >> x;
    multiset<int> ms;
    for (int i = 0; i < k; i++)
        ms.insert(a[i]);
    cout << *ms.rbegin() << " ";
    int l = 0, r = k;
    while (r < n)
    {
        ms.insert(a[r]);
        ms.erase(ms.find(a[l]));
        cout << *ms.rbegin() << " ";
        l++;
        r++;
    }
    cout << endl;
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