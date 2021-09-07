// #include<stdio.h>
#include<iostream>
#include<cstdio>
using namespace std;
int dynamic_programming(int n)
{
    int dp[1000];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    if(n<=2)
        return dp[n];
    for(int i=3;i<=n;i++)
    {
        dp[i] = dp[i-1] +  dp[i-2];
    }
    return dp[n];
}

int main()
{
    int length = 1000;
    int n;
    cin>>n;
    int res = dynamic_programming(n);
    cout<<res<<endl;
    return 0;
}