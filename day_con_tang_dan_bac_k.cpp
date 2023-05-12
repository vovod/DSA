#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int n, k, a[101], res = 0;

void back_track(int i, int k, int cnt)
{
    if (cnt == k)
    {
        res++;
    }
    else
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
                back_track(j, k, cnt + 1);
            else
                continue;
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        back_track(i, k, 1);
    cout << res << endl;
}