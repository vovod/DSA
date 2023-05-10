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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;
        for (int &x : c)
            cin >> x;
        int i = 0, j = 0, k = 0;
        vector<long long> v;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a[i] == b[j] && b[j] == c[k])
            {
                v.push_back(a[i]);
                i++;
                j++;
                k++;
            }
            else if (a[i] <= b[j] && a[i] <= c[k])
                i++;
            else if (b[j] <= a[i] && b[j] <= c[k])
                j++;
            else
                k++;
        }
        if (v.size() == 0)
            cout << "NO\n";
        else
        {
            for (int x : v)
                cout << x << " ";
            cout << endl;
        }
    }
}