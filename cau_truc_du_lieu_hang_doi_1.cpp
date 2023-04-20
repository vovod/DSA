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
        vector<int> q;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                cout << q.size() << endl;
            }
            else if (x == 2)
            {
                if (q.size() != 0)
                    cout << "NO\n";
                else
                    cout << "YES\n";
            }
            else if (x == 3)
            {
                int y;
                cin >> y;
                q.push_back(y);
            }
            else if (x == 4)
            {
                if (q.size() != 0)
                {
                    q.erase(q.begin());
                }
            }
            else if (x == 5)
            {
                if (q.size() == 0)
                {
                    cout << "-1\n";
                }
                else
                    cout << q[0] << endl;
                ;
            }
            else if (x == 6)
            {
                if (q.size() == 0)
                {
                    cout << "-1\n";
                }
                else
                    cout << q[q.size() - 1] << endl;
                ;
            }
        }
    }
}