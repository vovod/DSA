#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
        {
            b.push_back(a[i]);
        }
    }
    for (int i : b)
    {
        cout << i << " ";
    }
}