#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[1000001];

int maxIndexDiff(int arr[], int n)
{
    int maxDiff = n - 1;
    int i, j;

    while (maxDiff > 0)
    {
        j = n - 1;
        while (j >= maxDiff)
        {
            i = j - maxDiff;
            if (arr[j] > arr[i])
            {
                return maxDiff;
            }
            j = j - 1;
        }
        maxDiff = maxDiff - 1;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << maxIndexDiff(a, n) << endl;
    }
}