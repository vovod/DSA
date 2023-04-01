#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int dp[n+5];
        for(int i=1;i<=n;i++){
            dp[i]=i;
            for(int j=1;j*j<=i;j++){
                dp[i] = min(dp[i],dp[i-j*j]+1);
            }
        }
        cout << dp[n] << endl;
    }
}