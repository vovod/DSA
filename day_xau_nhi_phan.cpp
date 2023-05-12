#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
long long fibo[100];

void init()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

char timkiem(int n, long long i)
{
    if (n == 1)
        return '0';
    else if (n == 2)
        return '1';
    if (i <= fibo[n - 2])
    {
        return timkiem(n - 2, i);
    }
    else
        return timkiem(n - 1, i - fibo[n - 2]);
}

int main()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        long long n, i;
        cin >> n >> i;
        cout << timkiem(n, i) << endl;
    }
}