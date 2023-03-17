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
        if (a[i] < a[i + 1])
            return 0;
    }
    return 1;
}
int main()
{

    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    while (!check(a, n))
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
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}