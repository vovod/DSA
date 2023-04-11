#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int dp[1000005];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            dp[i]=i;
            for(int j=1;j<=sqrt(i);j++){
                dp[i] = min(dp[i],dp[i-j*j]+1);
            }
        }
        cout << dp[n] << endl;
    }
}