#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, x[100];
string s;
set<string> se;

void result(int k)
{
    string tmp = "";
    for (int i = 1; i <= k; i++)
    {
        tmp += s[x[i] - 1];
    }
    se.insert(tmp);
}

void back_track(int i, int k)
{
    for (int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if (i == k)
            result(k);
        else
            back_track(i + 1, k);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            back_track(1, i);
        }
        for (string x : se)
            cout << x << " ";
        cout << endl;
        se.clear();
    }
}