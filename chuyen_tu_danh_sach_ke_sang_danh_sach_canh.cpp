#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf(" ");
        string s;
        getline(cin, s);
        stringstream ss(s);
        string num;
        while (ss >> num)
        {
            if (stoi(num) > i)
                cout << i << " " << num << endl;
        }
    }
}