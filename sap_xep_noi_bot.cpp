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
    for (i = 0; i < n - 1; i++)
    {
        kt = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                kt = 1;
            }
        }
        if (kt == 0)
            break;
        cout << "Buoc " << i + 1 << ": ";
        in(a, n);
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    sapxep(a, n);
}