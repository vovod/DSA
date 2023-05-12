#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, a[25], val[25], pos = -1;
vector<string> s;

void sinh(int i)
{
    for (int j = 1; j <= n; ++j)
        if (j > pos && a[j] > val[i - 1])
        {
            pos = j;
            val[i] = a[j];
            string x;
            if (i >= 2)
            {
                for (int k = 1; k <= i; ++k)
                    x += to_string(val[k]) + " ";
                s.push_back(x);
            }
            sinh(i + 1);
            pos = 0;
        }
}
int main()
{
    val[0] = INT_MIN;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sinh(1);
    sort(s.begin(), s.end());
    for (auto x : s)
        cout << x << endl;
}
