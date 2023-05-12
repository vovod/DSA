#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, s;
        cin >> n >> m >> s;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        bool used[1001];
        memset(used, false, sizeof(used));
        queue<int> q;
        q.push(s);
        used[s] = true;
        while (!q.empty()){
            int top = q.front();
            q.pop();
            cout << top << " ";
            for (int x : adj[top]){
                if (!used[x]){
                    q.push(x);
                    used[x] = true;
                }
            }
        }
        cout << endl;
    }
}