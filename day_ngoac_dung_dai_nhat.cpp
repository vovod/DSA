#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
/*
1
()()((((())))
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int key = 0;
        st.push(-1);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.size() != 0)
                    key = max(key, i - st.top());
                else
                    st.push(i);
            }
        }
        // key = key * 2;
        cout << key << endl;
    }
}