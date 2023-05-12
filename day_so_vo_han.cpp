#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9+7;

void nhan(long long a[2][2], long long b[2][2]){
    long long c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = 0;
            for(int k=0;k<2;k++){
                c[i][j] += (a[i][k]*b[k][j])%MOD;
                c[i][j] %= MOD;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) a[i][j] = c[i][j];
    }
}

void power(long long a[2][2], int n){
    if(n==0 || n==1) return;
    long long tmp[2][2] = {{1,1}, {1,0}};
    power(a, n/2);
    nhan(a, a);
    if(n%2==1) nhan(a, tmp);
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[2][2] = {{1, 1}, {1, 0}};
        power(a, n);
        cout << a[0][1] << endl;
    }
}