#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

void printall(int d[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int d[k + 5];
        vector<int> c;
        int dem = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> d[i];
            if (d[i] != n - (k - i)+1)
            {
                dem++;
            }
        }
        if (dem == 0)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        for (int i = k - 1; i >= 0; i--)
        {
            if (d[i] <= n - (k - i))
            {
                int dem = 1;
                d[i] += 1;
                for (int j = i + 1; j < k; j++)
                {
                    d[j] = d[i] + dem;
                    dem++;
                }
                break;
            }
        }
        printall(d, k);
    }
}