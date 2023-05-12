#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[10001];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> v;
    v.push_back(a[0] * a[1] * a[2]);
    v.push_back(a[0] * a[1]);
    v.push_back(a[n - 1] * a[n - 2] * a[n - 3]);
    v.push_back(a[n - 1] * a[n - 2] * a[0]);
    v.push_back(a[n - 1] * a[n - 2]);
    v.push_back(a[0] * a[1] * a[n - 1]);
    sort(v.begin(), v.end());
    cout << v[v.size() - 1];
}