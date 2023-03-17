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
    map<int, int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    // sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] >= 1)
        {
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
}