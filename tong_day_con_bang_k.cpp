#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[105], b[105];
int n, k, dem=0;
void in()
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
            s += a[i];
    }
    if (s == k)
    {
        dem++;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
                cout << a[i] << " ";
        }
        cout << endl;
    }
}
void quaylui(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n - 1)
        {
            in();
        }
        else
            quaylui(k + 1);
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quaylui(0);
    cout << dem;
}