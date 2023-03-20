#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    ll ech[50];
    ech[0]=1, ech[1] = 1, ech[2] = 2; 
    for (int i = 3; i <= 50; i++)
    {
        ech[i] = ech[i - 1] + ech[i - 2] + ech[i-3];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ech[n] << endl;
    }
}