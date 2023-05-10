#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void sapxep(int a[], int n)
{
    int i, j, t, kt;
    vector<string> v;
    for (i = 0; i < n - 1; i++)
    {
        string tmp = "Buoc ";
        kt = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                kt = 1;
            }
        }
        if (kt == 0)
            break;
        tmp += to_string(i + 1) + ": ";
        for (int i = 0; i < n; i++)
            tmp += to_string(a[i]) + " ";
        v.push_back(tmp);
    }
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100], n;
        cin >> n;
        nhap(a, n);
        sapxep(a, n);
    }
}