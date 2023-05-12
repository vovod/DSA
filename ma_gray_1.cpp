#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
vector<vector<string>> a;

void init()
{
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    a.push_back(v);
    for (int i = 0; i <= 10; i++)
    {
        vector<string> b(a[i]);
        reverse(b.begin(), b.end());
        vector<string> x;
        for (int j = 0; j < a[i].size(); j++)
            x.push_back("0" + a[i][j]);
        for (int j = 0; j < b.size(); j++)
            x.push_back("1" + b[j]);
        a.push_back(x);
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (string x : a[n - 1])
            cout << x << " ";
        cout << endl;
    }
}