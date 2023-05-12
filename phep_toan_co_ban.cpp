#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
string ans;
char sign[] = {'+', '-'};
bool ok;

bool check(string &s)
{
    int a = stoi(s.substr(0, 2)), b = stoi(s.substr(5, 2)), check;
    if (s[3] == '+')
        check = a + b;
    else
        check = a - b;
    string tmp = to_string(check);
    string c = s.substr(10, 2);
    return tmp == c;
}

void Try(int i, string s)
{
    if (ok)
        return;
    if (i == s.size())
    {
        if (check(s))
        {
            ans = s;
            ok = 1;
        }
        return;
    }
    if (s[i] != '?')
    {
        if (!ok)
            Try(i + 1, s);
        return;
    }
    if (i == 3)
    {
        for (char j : sign)
        {
            s[i] = j;
            if (!ok)
                Try(i + 1, s);
        }
    }
    else if (!i or i == 5 or i == 10)
    {
        for (char j = '1'; j <= '9'; ++j)
        {
            s[i] = j;
            if (!ok)
                Try(i + 1, s);
        }
    }
    else
    {
        for (char j = '0'; j <= '9'; ++j)
        {
            s[i] = j;
            if (!ok)
                Try(i + 1, s);
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    string s;
    cin.ignore();
    while (t--)
    {
        ok = 0;
        ans = "";
        getline(cin, s);
        if (s[3] == '*' or s[3] == '/')
        {
            cout << "WRONG PROBLEM!\n";
            continue;
        }
        Try(0, s);
        if (ans.empty())
            cout << "WRONG PROBLEM!\n";
        else
            cout << ans << endl;
    }
    return 0;
}