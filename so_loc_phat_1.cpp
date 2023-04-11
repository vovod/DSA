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
        stack<string> st;
        q.push("6");
        q.push("8");
        st.push("6");
        while (q.front().size() != n + 1)
        {
            q.push(q.front() + '6');
            q.push(q.front() + '8');
            q.pop();
            st.push(q.front());
        }
        st.pop();
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}