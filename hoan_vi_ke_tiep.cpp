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
        int dem = 0;
        for (int i = n - 1; i > 0; i--)
        {
            int tmp;
            int k = 9999999;
            if (a[i] > a[i - 1])
            {
                for (int j = i; j < n; j++)
                {
                    if (a[j] - a[i - 1] < k && a[j] - a[i - 1] > 0)
                    {
                        tmp = j;
                        k = a[j] - a[i - 1];
                    }
                }
                swap(a[i - 1], a[tmp]);
                sort(a + i, a + n);
                dem++;
                break;
            }
        }
        // sort(a+1,a+n);
        for (int i = 0; i < n; i++)
        {
            if (dem != 0)
                cout << a[i] << " ";
            else
                cout << a[n - i - 1] << " ";
        }
        cout << endl;
    }
}