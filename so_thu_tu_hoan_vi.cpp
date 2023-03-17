#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int check(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        int b[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int dem = 1;
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        while (!check(a, b, n))
        {
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
                    break;
                }
            }
            dem++;
        }
        cout << dem << endl;
    }
}