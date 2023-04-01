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
        string s1, s2;
        cin >> s1 >> s2;
        int a[1005][1005] = {0};
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s2.size(); j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    a[i][j] = a[i - 1][j - 1] + 1;
                }
                else
                {
                    a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                }
            }
        }
        cout << a[s1.size()][s2.size()] << endl;
    }
}