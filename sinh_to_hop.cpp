#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

void in(int a[], int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

int check(int a[], int n, int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != n - (k - i))
            return 0;
    }
    in(a, k);
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k + 5];
        for (int i = 1; i <= k; i++)
        {
            a[i] = i;
        }
        while (!check(a, n, k))
        {
            in(a, k);
            for (int i = k; i >= 1; i--)    
            {
                if (a[i] < n - (k - i))
                {
                    int x = a[i] + 1;
                    for (int j = i; j <= k; j++)
                    {
                        a[j] = x + j - i;
                    }
                    break;
                }
            }
        }
        cout << endl;
    }
}