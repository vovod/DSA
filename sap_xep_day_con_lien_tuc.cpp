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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l, r;
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                l = i;
                break;
            }
        for (int i = n - 1; i > 0; i--)
            if (a[i] < a[i - 1])
            {
                r = i;
                break;
            }
        int min = *min_element(a + l, a + r + 1);
        int max = *max_element(a + l, a + r + 1);
        for (int i = 0; i <= l; i++)
            if (a[i] > min)
            {
                l = i;
                break;
            }
        for (int i = n - 1; i >= r; i--)
            if (a[i] < max)
            {
                r = i;
                break;
            }
        cout << l + 1 << " " << r + 1 << endl;
    }
}