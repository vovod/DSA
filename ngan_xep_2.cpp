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
    vector<int> st;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        if (s == "PUSH")
        {
            cin >> n;
            st.insert(st.begin(), n);
        }
        else if (s == "POP")
        {
            if (st.size() != 0)
                st.erase(st.begin());
        }
        else if (s == "PRINT")
        {
            if (st.size() == 0)
                cout << "NONE" << endl;
            else
            {
                cout << st[0];
                cout << endl;
            }
        }
    }
}
/*
9
PUSH 1
PUSH 2
POP
PRINT
PUSH 3
PRINT
POP
POP
PRINT
*/