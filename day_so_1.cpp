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
        int a[n + 5] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                if(j==0) cout << "[";
                if(j!=n-i-1)cout << a[j] << " ";
                else cout << a[j] << "]";
                a[j] = a[j] + a[j+1];
            }
            cout << endl;
        }
    }
}