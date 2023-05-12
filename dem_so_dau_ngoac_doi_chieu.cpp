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
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else
            {
                if (st.empty())
                {
                    st.push(s[i]);
                    cnt++;
                }
                else
                    st.pop();
            }
        }
        cnt += st.size() / 2;
        cout << cnt << endl;
    }
}