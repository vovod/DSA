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
        scanf(" ");
        string s;
        getline(cin, s);
        stack<char> st;
        int ok = 0; // kiểm tra xem có thừa dấu ngoặc ko
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ')' && s[i] != ' ')
                st.push(s[i]);
            else if (s[i] != ' ')
            {
                bool check = false; // kiểm tra xem có dấu tính toán hay ko
                while (!st.empty())
                {
                    char x = st.top();
                    st.pop();
                    if (x == '(')
                    {
                        if (!check)
                            ok = 1;
                        break;
                    }
                    else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == '^')
                        check = true;
                    if (ok == 1)
                        break;
                }
            }
        }
        if (ok == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}