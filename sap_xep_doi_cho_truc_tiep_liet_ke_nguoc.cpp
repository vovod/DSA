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

void sapxep(int a[], int n)
{
    vector<string> v;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        string tmp = "Buoc ";
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
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