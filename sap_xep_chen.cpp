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
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        j = i - 1;
        while (a[j] > t && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
        cout << "Buoc " << i << ": ";
        in(a, i + 1);
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    sapxep(a, n);
}