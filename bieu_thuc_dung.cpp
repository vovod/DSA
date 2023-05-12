#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void solve(string s)
{
    vector<int> vitri;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[')
            vitri.push_back(i);
    }
    int cnt = 0, res = 0;
    int pos = 0; // lưu vị trí dấu ] kế tiếp
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[')
        {
            cnt++;
            pos++;
        }
        else
        {
            cnt--;
        }
        if (cnt < 0)
        {
            res += vitri[pos] - i;
            swap(s[i], s[vitri[pos]]);
            cnt = 1;
            pos++;
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}