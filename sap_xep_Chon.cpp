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
    int i, j, m, t;
    for (i = 0; i < n - 1; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[m])
                m = j;
        swap(a[m], a[i]);
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