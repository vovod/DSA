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
    string F[105];
    F[1] = "A";
    F[2] = "B";
    for (int i = 3; i < 94; i++)
    {
        F[i] = F[i - 2] + F[i - 1];
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << F[n][k + 1] << endl;
    }
}