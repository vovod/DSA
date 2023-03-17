#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int check(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
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
        for (int i = 0; i < n; i++)
        {
            a[i] = n - i;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << " ";
        while (!check(a, n))
        {
            for (int i = n - 1; i > 0; i--)
            {
                int tmp;
                int k = 9999999;
                if (a[i] < a[i - 1])
                {
                    for (int j = i; j < n; j++)
                    {
                        if (a[i - 1] - a[j] < k && a[i - 1] - a[j] > 0)
                        {
                            tmp = j;
                            k = a[i - 1] - a[j];
                        }
                    }
                    swap(a[i - 1], a[tmp]);
                    sort(a + i, a + n, greater<int>());
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}