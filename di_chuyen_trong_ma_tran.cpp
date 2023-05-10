#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, m, a[100][100];
int cnt = 0;

void back_track(int i, int j)
{
    if (i == n && j == m)
    {
        cnt++;
        return;
    }
    if (i + 1 <= n)
    {
        back_track(i + 1, j);
    }
    if (j + 1 <= m)
    {
        back_track(i, j + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        cnt = 0;
        back_track(1, 1);
        cout << cnt << endl;
    }
}