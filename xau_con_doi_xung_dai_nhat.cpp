#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
bool f[1005][1005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int j, res = 1;
        int n = s.size();
        memset(f, false, sizeof(f));
        for (int i = 0; i < n; i++)
            f[i][i] = true;
        for (int i = 0; i < n - 1; i++)
            f[i + 1][i] = true;
        for (int k = 1; k < n; k++)
        {
            for (int i = 0; i < n - k; i++)
            {
                j = i + k;
                if (s[i] == s[j])
                    f[i][j] = f[i + 1][j - 1];
                if (f[i][j])
                    res = max(res, j - i + 1);
            }
        }
        cout << res << endl;
    }
}