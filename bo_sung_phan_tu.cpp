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
        vector<int> a;
        map<int, int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x]++;
            if (b[x] == 1)
                a.push_back(x);
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] != a[i - 1] + 1)
                sum += a[i] - a[i - 1] - 1;
        }
        cout << sum << endl;
    }
}