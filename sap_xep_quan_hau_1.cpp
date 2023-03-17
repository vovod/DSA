#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n;
vector<int> x, c, c1, c2;
vector<vector<int>> a;

int check(int i, int j)
{
    if (c1[i - j + n - 1] == 0 || c2[i + j - 2] == 0 || c[j] == 0)
        return 0;
    return 1;
}
void queen(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check(i, j))
        {
            x[i] = j;
            c[j] = 0;
            c2[i + j - 2] = 0;
            c1[i - j + n - 1] = 0;
            if (i == n)
                a.push_back(x);
            else
                queen(i + 1);
            c[j] = 1;
            c2[i + j - 2] = 1;
            c1[i - j + n - 1] = 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n;
        x.resize(n + 1);
        c.resize(n + 1, 1);
        c1.resize(2 * n, 1);
        c2.resize(2 * n, 1);
        queen(1);
        cout << a.size() << endl;
    }
}