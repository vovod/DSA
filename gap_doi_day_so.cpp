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
        long long n, k;
        cin >> n >> k;
        int cnt = 1;
        while (k % 2 == 0)
        {
            cnt++;
            k /= 2;
        }
        cout << cnt << endl;
    }
}