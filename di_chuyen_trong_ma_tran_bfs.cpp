#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int adj[1000][1000], d[1000][1000];
int n, m;

int BFS()
{
    queue<pair<int, int>> q;
    q.push({1, 1});
    d[1][1] = 0;
    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        int a = top.first;
        int b = top.second;
        if (a == n && b == m)
        {
            return d[a][b];
        }
        int x = a + adj[a][b];
        int y = b + adj[a][b];
        if (d[a][y] == -1)
        {
            q.push({a, y});
            d[a][y] = d[a][b] + 1;
        }
        if (d[x][b] == -1)
        {
            q.push({x, b});
            d[x][b] = d[a][b] + 1;
        }
    }
    return -1;
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
            {
                cin >> adj[i][j];
                d[i][j] = -1;
            }
        cout << BFS() << endl;
    }
}