#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//recursion ka bada bhai
//overlapping subproblems 

//very similar to recursion

// Top Down Approach - Recursion + Momoization(saving the ans of subprblems using datasturctures) 
// Bottom up - Tabulation 


//FIBONACCI USING DP


int solvedp(int n,vector<int> &dp){

        if(n == 0 || n == 1){
            return n;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=solvedp(n-1,dp)+solvedp(n-2,dp);

        return dp[n];

    }
int main() {

        //using dp
        //top down approach

        int n=6;

        vector<int> dp(n+1,-1);

        int ans=solvedp(n,dp);

        cout<<ans;

}
