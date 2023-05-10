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
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[i] >= st.top())
                st.pop();
            if (st.empty())
                v.push_back(-1);
            else
                v.push_back(st.top());
            st.push(a[i]);
        }
        reverse(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}