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
        long long n;
        cin >> n;
        queue<long long> q;
        q.push(1);
        int cnt = 0;
        while (1)
        {
            long long top = q.front();
            q.pop();
            if (top > n)
                break;
            q.push(top * 10);
            q.push(top * 10 + 1);
            cnt++;
        }
        cout << cnt << endl;
    }
}