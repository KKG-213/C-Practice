// find fibonacci number of nth term 

// n=5 then reutrn (5) as  we know ->0,1,1,2,3,5,8,13,21..... 

#include<iostream>
#include<vector>
using namespace std;

int fib(int n )
{
    if(n<=1) return n;

    vector<int> dp(n+1);
    dp[0] =0;
    dp[1] =1;

    

   for(int i=2;i<=n;i++)
   {
       dp[i] = dp[i-1]+dp[i-2];

   }
   return dp[n];


}

int main()
{
    int n;
    cin>>n;
    

    int res = fib(n);
    cout<< res;

    return 0;
}