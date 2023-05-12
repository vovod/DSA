#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, m, s;
vector<vector<int>> adj;
bool used[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    used[u] = true;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        cout << top << " ";
        for (int x : adj[top])
        {
            if (!used[x])
            {
                q.push(x);
                used[x] = true;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s;
        adj.resize(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(used, false, sizeof(used));
        bfs(s);
        cout << endl;
        adj.clear();
    }
}