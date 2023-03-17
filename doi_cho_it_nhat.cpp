#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int findMinSwap(vector<int> &arr, int n)
{
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i].first = arr[i];
        temp[i].second = i;
    }

    sort(temp.begin(), temp.end());
    int minimum_swaps = 0;
    int i = 0;
    while (i < n)
    {
        if (temp[i].second == i or temp[i].first == arr[i])
        {
            ++i;
            continue;
        }
        else
        {
            swap(temp[i].first, temp[temp[i].second].first);
            swap(temp[i].second, temp[temp[i].second].second);
            if (temp[i].second != i)
                i--;
        }
        minimum_swaps++;
        ++i;
    }
    return minimum_swaps;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cout << findMinSwap(a, n) << '\n';
    }
}