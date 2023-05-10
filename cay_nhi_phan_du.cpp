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
        map<int, int> mp;
        vector<int> st;
        for (int i = 0; i < n; i++)
        {
            int cha, con;
            char vt;
            cin >> cha >> con >> vt;
            mp[cha]++;
            if (mp[cha] == 1)
            {
                st.push_back(cha);
            }
        }
        int key = 1;
        for (int i : st)
        {
            if (mp[i] != 2)
            {
                key = 0;
                break;
            }
        }
        cout << key << endl;
    }
}