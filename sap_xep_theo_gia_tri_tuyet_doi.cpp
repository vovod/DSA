#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int x;
int solve(int a, int b)
{
    int c = a - b;
    if (c < 0)
        c = -c;
    return c;
}

int check(int a, int b)
{
    return (solve(a, x) < solve(b, x));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stable_sort(a, a + n, check);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}