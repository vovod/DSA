#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[105], b[105];
int n, k, dem = 0;
void in()
{
    int s = 0;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            s += a[i];
            check = i;
        }
    }
    if (s == k)
    {
        dem++;
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {

                if (check != i)
                    cout << a[i] << " ";
                else
                    cout << a[i] << "]";
            }
        }
        cout << " ";
    }
}
void quaylui(int k)
{
    for (int i = 1; i >= 0; i--)
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
    int t;
    cin >> t;
    while (t--)
    {
        dem = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        quaylui(0);
        if (dem == 0)
            cout << -1;
        cout << endl;
    }
}