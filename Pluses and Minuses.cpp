// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        
        string s;
        cin>>s;
        int n=s.length();
        int res[n+1]; 
        bool dp[n+1];
        res[0]=0;
        dp[0]=false;

        for(int i=0; i<n; i++){
        	dp[i+1]=false;
        	if(s[i]=='+') res[i+1]=res[i]+1;
        	else res[i+1]=res[i]-1;
        }
      	for(int i=1; i<=n; i++){
        	res[i]=-1*res[i];
        }

        ll ans=0;

        for(int i=1; i<=n; i++){
        	if(res[i]>0 && dp[res[i]]==false){
        		dp[res[i]]=true;
        		ans+=i;
        	}
        }
        ans+=n;
        cout<<ans<<endl;
        
     } 
    
    return 0;
} 