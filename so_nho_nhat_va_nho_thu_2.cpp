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
        int n;
        cin >> n;
        int min1 = 1e9, min2 = min1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
                min1 = x;
            int tmp = min1;
            if (x < min2  && x != min1)
                min2 = x;
            min1 = min(min2, min1);
            min2 = max(min2, tmp);
        }
        if (min1 == min2 || min2 == 1e9)
            cout << -1 << endl;
        else
            cout << min1 << " " << min2 << endl;
    }
}