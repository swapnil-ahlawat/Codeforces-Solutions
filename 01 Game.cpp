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
        int one=0, zero=0;

        for(int i=0; i<n; i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        int mini=min(one, zero);
        if(mini%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
        
     } 
    
    return 0;
} 