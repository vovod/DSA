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
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '1')
                    tmp += "0";
                else
                    tmp += "1";
            }
            else
            {
                if (s[i + 1] == '1')
                    tmp += "1";
                else
                    tmp += "0";
            }
        }
        cout << tmp << endl;
    }
}