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
        
        ll n, r;
        cin>>n>>r;
        if(r>=n){
        	ll ans= n*(n-1)/2;
        	cout<<ans+1<<endl;
        }
        else{
        	ll ans= r*(r+1)/2;
        	cout<<ans<<endl;
        }

        
     } 
    
    return 0;
} 