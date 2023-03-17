#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 9; i >= 0; i--)
        {
            if (n >= a[i])
            {
                sum = sum + (n / a[i]);
                n = n % a[i];
            }
            if (n == 0)
                break;
        }
        cout << sum << endl;
    }
}