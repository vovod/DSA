#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, p, s, ans, x[1001];
bool used[1001];
vector<int> prime;
vector<vector<int>> res;

bool Prime(int k)
{
    if (k < 2)
        return false;
    for (int i = 2; i <= sqrt(k); i++)
        if (k % i == 0)
            return false;
    return true;
}

void inp()
{
    cin >> n >> p >> s;
    ans = 0;
    for (int i = p + 1; i <= s; i++)
    {
        if (Prime(i))
            prime.push_back(i);
    }
    memset(used, false, sizeof(used));
}

void back_track(int sum, int pos, int cnt)
{
    if (sum == s && cnt == n)
    {
        ans++;
        vector<int> tmp(x, x + cnt);
        res.push_back(tmp);
        return;
    }
    for (int j = pos; j < prime.size(); j++)
    {
        if (!used[j] && sum + prime[j] <= s)
        {
            used[j] = true;
            x[cnt] = prime[j];
            back_track(sum + prime[j], j, cnt + 1);
            used[j] = false;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        back_track(0, 0, 0);
        cout << ans << endl;
        for (int i = 0; i < res.size(); i++)
        {
            for (int a : res[i])
                cout << a << " ";
            cout << endl;
        }
        prime.clear();
        res.clear();
    }
}
