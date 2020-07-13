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
        int lone[n], rone[n], lzero[n+1], rzero[n+1];
        if(s[0]=='1'){
          lone[0]=1;
          lzero[0]=0;
        }
        else{
          lone[0]=0;
          lzero[0]=1;
        }
          rone[n]=0;
          rzero[n]=0;
        
        for(int i=1; i<n; i++){
          lone[i]=lone[i-1];
          lzero[i]=lzero[i-1];
          if(s[i]=='1') lone[i]++;
          else lzero[i]++;
        }

        for(int i=n-1; i>=0; i--){
          rone[i]=rone[i+1];
          rzero[i]=rzero[i+1];
          if(s[i]=='1') rone[i]++;
          else rzero[i]++;
        }

        if(s.length()==1 || s.length()==2){
          cout<<0<<endl;
        }
        else{
          int mini=INT_MAX;
          for(int i=0; i<n; i++){
            mini= min(mini, lone[i]+rone[i+1]);
            mini= min(mini, lzero[i]+rzero[i+1]);
            mini= min(mini, lone[i]+rzero[i+1]);
            mini= min(mini, lzero[i]+rone[i+1]);
          }  
          cout<<mini<<endl;
        }
        
     } 
    
    return 0;
} 