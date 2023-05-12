#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, p;
        cin >> n >> s >> p;
        int tong_luong_thuc = s * p;
        int ngay_mua = s - s / 7;
        int ok = 0;
        for (int i = 1; i <= ngay_mua; i++)
        {
            if (n * i >= tong_luong_thuc)
            {
                ok = 1;
                cout << i;
                break;
            }
        }
        if (!ok)
            cout << "-1";
        cout << endl;
    }
}