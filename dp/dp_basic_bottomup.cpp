#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Bottom up - Tabulation 


//FIBONACCI USING DP


int solvedp(int n,vector<int> &dp){

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main() {

        //using dp
        //top down approach

        int n=6;

        vector<int> dp(n+1,-1);

        dp[0]=0;
        dp[1]=1;

        int ans=solvedp(n,dp);

        cout<<ans;

}
