#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
string min5(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '6')
            s[i] = '5';
    }
    return s;
}
string max6(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '5')
            s[i] = '6';
    }
    return s;
}
void solve(string s1, string s2)
{
    int minsum = stoi(min5(s1)) + stoi(min5(s2));
    int maxsum = stoi(max6(s1)) + stoi(max6(s2));
    cout << minsum << " " << maxsum;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
}