#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
const int N = 1000000;
int check[N + 1];
int main()
{
    int t;
    cin >> t;
    vector<int> a;
    for (int i = 2; i <= N; i++)
    {
        check[i] = 1;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (check[i] == 1)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                check[j] = 0;
            }
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 0; i <= n / 2; i++)
        {
            if (check[i] == 1 && check[n - i] == 1)
            {
                cout << i << " " << n - i << " ";
                dem++;
            }
            if (dem == 1)
                break;
        }
        if (dem == 0)
            cout << "-1" << endl;
        else
            cout << endl;
    }
}