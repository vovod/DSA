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
        int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if (st.empty())
                {
                    dem = 1;
                    break;
                }
                else
                {
                    if ((st.top() == '[' && s[i] != ']') || (st.top() == '{' && s[i] != '}') || (st.top() == '(' && s[i] != ')'))
                    {
                        dem = 1;
                        break;
                    }
                    else
                        st.pop();
                }
            }
        }
        if (st.empty() && dem == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}