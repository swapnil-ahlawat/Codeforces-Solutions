// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 100000000

int n1, n2, lim1, lim2;
int dp[101][101][11][11];

int calc(int n1, int n2, int k1, int k2){
    if((n1+n2)==0) return 1;

    if(dp[n1][n2][k1][k2]!=-1) return dp[n1][n2][k1][k2];

    int x=0, y=0;
    if(n1>0 && k1>0){
        x= calc(n1-1, n2, k1-1, lim2);
    }
    if(n2>0 && k2>0){
        y= calc(n1, n2-1, lim1, k2-1);
    }
    dp[n1][n2][k1][k2]= (x+y)%mod;

    return dp[n1][n2][k1][k2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    memset(dp, -1, sizeof dp);
    cin>>n1>>n2>>lim1>>lim2;
    cout<<calc(n1, n2, lim1, lim2)<<endl;    
    
    return 0;
} 