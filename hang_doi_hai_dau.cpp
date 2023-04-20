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
        if (s == "PUSHFRONT")
        {
            cin >> n;
            st.insert(st.begin(), n);
        }
        if (s == "PUSHBACK")
        {
            cin >> n;
            st.push_back(n);
        }
        else if (s == "POPFRONT")
        {
            if (st.size() != 0)
                st.erase(st.begin());
        }
        else if (s == "POPBACK")
        {
            if (st.size() != 0)
                st.pop_back();
        }
        else if (s == "PRINTFRONT")
        {
            if (st.size() == 0)
                cout << "NONE" << endl;
            else
            {
                cout << st[0];
                cout << endl;
            }
        }
        else if (s == "PRINTBACK")
        {
            if (st.size() == 0)
                cout << "NONE" << endl;
            else
            {
                cout << st[st.size() - 1];
                cout << endl;
            }
        }
    }
}
/*
10
PUSHBACK 1
PUSHFRONT 2
PUSHBACK 3
PRINTFRONT
POPFRONT
PRINTFRONT
POPFRONT
PRINTBACK
POPFRONT
PRINTBACK
*/