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
    int i, j, t;
    vector<string> v;
    for (i = 0; i < n; i++)
    {
        string tmp = "Buoc ";
        t = a[i];
        j = i - 1;
        while (a[j] > t && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
        tmp += to_string(i) + ": ";
        for (int j = 0; j < i + 1; j++)
            tmp += to_string(a[j]) + " ";
        v.push_back(tmp);
    }
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << endl;
}
int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    sapxep(a, n);
}