// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int n, k, z;
int a[100005];
int dp[100005][6];

long long int solve(int i, int j, int cur, bool cango){
    if(cur==0) return 0;

    if(i>0 && cango && j>0){
        if(dp[cur-1][j-1]==-1) dp[cur-1][j-1]=solve(i-1, j-1, cur-1, false);
        dp[cur][j]=max(dp[cur][j], dp[cur-1][j-1]+a[i-1]);
    }
    if(i<n){
        if(dp[cur-1][j]==-1) dp[cur-1][j]= solve(i+1, j, cur-1, true);
        dp[cur][j]=max(dp[cur][j], dp[cur-1][j]+a[i+1]);
    }

    return dp[cur][j];

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>z;

        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<=k; i++){
            for(int j=0; j<6; j++){
                dp[i][j]=-1;
            }
        }
        cout<<solve(0, z, k, true)+a[0]<<endl;
        
     } 
    
    return 0;
} 