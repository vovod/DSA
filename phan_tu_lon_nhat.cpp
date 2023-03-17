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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}