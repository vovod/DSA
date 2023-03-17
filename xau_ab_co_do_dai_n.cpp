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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "A B" << endl;
        }
        else
        {
            string s = "";
            string end = "";
            for (int i = 0; i < n; i++)
            {
                s += "A";
                end += "B";
            }
            cout << s << " ";
            while (s != end)
            {
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == 'A')
                    {
                        s[i] = 'B';
                        for (int j = i + 1; j < s.size(); j++)
                        {
                            s[j] = 'A';
                        }
                        break;
                    }
                }
                cout << s << " ";
            }
            cout << endl;
        }
    }
}