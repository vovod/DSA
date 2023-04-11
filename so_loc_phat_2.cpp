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
        int n;
        cin >> n;
        int dem = 0;
        queue<string> q;
        vector<string> st;
        q.push("6");
        q.push("8");
        st.push_back("6");
        while (q.front().size() != n + 1)
        {
            q.push(q.front() + '6');
            q.push(q.front() + '8');
            q.pop();
            st.push_back(q.front());
        }
        cout << st.size() - 1 << endl;
        for (int i = 0; i < st.size() - 1; i++)
        {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}