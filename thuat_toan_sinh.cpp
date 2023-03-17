#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void printall(string s, int n)
{
    if (n % 2 == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << "0 ";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << "1 ";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    if (n == 1){
        cout << "0\n1";
        return 0;
    }
    string s = "";
    string end = "";
    for (int i = 0; i < n / 2; i++)
    {
        s += "0";
        end += "1";
    }
    printall(s, n);
    while (s != end)
    {
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
        printall(s, n);
    }
}