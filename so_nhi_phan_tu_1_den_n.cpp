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
        int dem = 0;
        queue<string> q;
        q.push("1");
        if (n == 0)
        {
            cout << "0\n";
            continue;
        }
        while (dem != n)
        {
            cout << q.front() << " ";
            dem++;
            q.push(q.front() + '0');
            q.push(q.front() + '1');
            q.pop();
        }
        cout << endl;
    }
}