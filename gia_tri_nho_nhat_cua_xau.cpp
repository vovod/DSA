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
        int k;
        string s;
        cin >> k >> s;
        map<char, int> mp;
        for (char x : s)
            mp[x]++;
        priority_queue<int> q;
        for (auto it : mp)
            q.push(it.second);
        while (k--)
        {
            int top = q.top();
            q.pop();
            top--;
            q.push(max(top, 0));
        }
        long long ans = 0;
        while (!q.empty())
        {
            ans += (long long)q.top() * q.top();
            q.pop();
        }
        cout << ans << endl;
    }
}