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
        int n = s.size();
        string tmp = "";
        tmp += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (tmp[i - 1] == '1')
                    tmp += "0";
                else
                    tmp += "1";
            }
            else
            {
                tmp += tmp[i - 1];
            }
        }
        cout << tmp << endl;
    }
}