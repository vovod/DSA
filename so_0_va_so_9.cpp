#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
vector<long long> v;

void init()
{
    queue<long long> q;
    q.push(9);
    while (1)
    {
        long long top = q.front();
        q.pop();
        if (top >= 9999999999)
            break;
        v.push_back(top);
        q.push(top * 10);
        q.push(top * 10 + 9);
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (long long x : v)
        {
            if (x % n == 0)
            {
                cout << x << endl;
                break;
            }
        }
    }
}