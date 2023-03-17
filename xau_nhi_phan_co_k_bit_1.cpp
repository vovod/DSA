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
        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            string s = "";
            string end = "";
            for (int i = 0; i < n; i++)
            {
                s += "0";
                end += "1";
            }
            while (s != end)
            {
                int dem1 = 0;
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == '0')
                    {
                        s[i] = '1';
                        for (int j = i + 1; j < s.size(); j++)
                        {
                            s[j] = '0';
                        }
                        break;
                    }
                }
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '1')
                        dem1++;
                }
                if (dem1 == k)
                    cout << s << endl;
            }
        }
    }
}