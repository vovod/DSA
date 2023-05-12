#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, m, tick;
vector<int> adj[1001];
bool visited[1001];
int low[1001], disc[1001];
vector<pair<int, int>> bridge_edge;

void inp()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u, int parent)
{
    visited[u] = true;
    low[u] = disc[u] = tick++;
    for (int x : adj[u])
    {
        if (x == parent)
            continue;
        if (!visited[x])
        {
            dfs(x, u);
            low[u] = min(low[u], low[x]);
            if (low[x] > disc[u])
                bridge_edge.push_back({min(u, x), max(u, x)});
        }
        else
        {
            low[u] = min(low[u], disc[x]);
        }
    }
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tick = 1;
        inp();
        dfs(1, -1);
        sort(bridge_edge.begin(), bridge_edge.end(), cmp);
        for (auto it : bridge_edge)
        {
            cout << it.first << " " << it.second << " ";
        }
        cout << endl;
        bridge_edge.clear();
        for (int i = 0; i < 1000; i++)
            adj[i].clear();
    }
}
