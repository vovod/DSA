#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int cnt(int n)
{
    if (n <= 1)
        return 0;
    int x = 1 + n % 2 + cnt(n / 2);
    int y = 1 + n % 3 + cnt(n / 3);
    return min(x, y);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt(n) << endl;
    }
}