#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int C[1001][1001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, M;
        cin >> n >> M;
        int w[n + 1], v[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> w[i];
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = 0; i <= M; i++)
            C[0][i] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                C[i][j] = C[i - 1][j];
                if (w[i] <= j && C[i - 1][j - w[i]] + v[i] > C[i - 1][j])
                {
                    C[i][j] = C[i - 1][j - w[i]] + v[i];
                }
            }
        }
        cout << C[n][M] << endl;
    }
}