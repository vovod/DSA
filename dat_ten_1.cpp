#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

void printall(vector<string> c, int d[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << c[d[i]] << " ";
    }
    cout << endl;
}

int check(int d[], int k, int x)
{
    for (int i = 0; i < k; i++)
    {
        if (d[i] != x - (k - i))
            return 0;
    }
    return 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    string a[n + 5];
    map<string, int> b;
    vector<string> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] >= 1)
        {
            c.push_back(a[i]);
            b[a[i]] = 0;
        }
    }
    int d[n + 5];
    for (int i = 0; i < k; i++)
    {
        d[i] = i;
    }
    int x = c.size();
    printall(c, d, k);
    int kaka = 0;
    while (!check(d, k, x))
    {
        for (int i = k - 1; i >= 0; i--)
        {
            if (d[i] < x - (k - i))
            {
                int dem = 1;
                d[i] += 1;
                for (int j = i + 1; j < k; j++)
                {
                    d[j] = d[i] + dem;
                    dem++;
                }
                break;
            }
        }
        printall(c, d, k);
    }
}
/*
4 3
1 2 3 4
*/