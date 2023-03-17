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

        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int min = 1e9;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < min)
                min = a[i] - a[i - 1];
        }
        cout << min << endl;
    }
}