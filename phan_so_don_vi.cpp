#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
void back_track(long long tu, long long mau)
{
    if (mau % tu == 0)
    {
        cout << "1/" << mau / tu << endl;
        return;
    }
    long long tmp = mau / tu + 1;
    cout << "1/" << tmp << " + ";
    long long mau_moi = mau * tmp;
    long long tu_moi = tmp * tu - mau;
    back_track(tu_moi, mau_moi);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long tu, mau;
        cin >> tu >> mau;
        back_track(tu, mau);
    }
}