#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void HANOI(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    HANOI(n - 1, a, c, b);
    HANOI(1, a, b, c);
    HANOI(n - 1, b, a, c);
}

int main()
{
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin >> n;
    HANOI(n, a, b, c);
}