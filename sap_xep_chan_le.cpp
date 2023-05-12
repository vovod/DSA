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
    long long a[n];
    vector<long long> chan, le;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((i + 1) % 2 == 0)
            chan.push_back(a[i]);
        else
            le.push_back(a[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<long long>());
    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if ((k + 1) % 2 != 0)
            cout << le[j++] << " ";
        else
            cout << chan[i++] << " ";
    }
}