#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, a[100][100], cot[100], xuoi[100], nguoc[100], cnt, ans = 0, x[100];

void inp()
{
    n = 8;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    memset(cot, 1, sizeof(cot));
    memset(xuoi, 1, sizeof(xuoi));
    memset(nguoc, 1, sizeof(nguoc));
    ans = 0;
}

void back_track(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            x[i] = j; // con hậu ở hàng i cột j
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
            if (i == n)
            {
                int sum = 0;
                for (int k = 1; k <= n; k++)
                    sum += a[k][x[k]];
                ans = max(ans, sum);
            }
            else
                back_track(i + 1);
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        back_track(1);
        cout << ans << endl;
    }
}