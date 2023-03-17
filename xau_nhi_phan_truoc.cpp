#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void sinh(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            for (int j = i + 1; j < s.size(); j++)
            {
                s[j] = '1';
            }
            break;
        }
    }
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string check = "";
        string key = "";
        for (int i = 0; i < s.size(); i++)
        {
            check += "0";
            key += "1";
        }
        if (s == check)
        {
            cout << key << endl;
        }
        else
        {
            sinh(s);
        }
    }
}