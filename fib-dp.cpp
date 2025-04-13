// find fibonacci number of nth term 

// n=5 then reutrn (5) as  we know ->0,1,1,2,3,5,8,13,21..... 

#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int>& dp )
{
    if(n==0) return 0;
    if(n==1) return 1;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1, dp)+fib(n-2,dp);

}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    int res = fib(n, dp);
    cout<< res;

    return 0;
}