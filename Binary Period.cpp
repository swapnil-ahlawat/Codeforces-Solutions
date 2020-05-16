// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int p;
    cin>>p;
    while(p--){
        string t;
        cin>>t;
        int len=t.length();
        bool flag=false;
        for(int i=0; i<(len-1); i++){
          if(t[i]!=t[i+1]){
            flag=true;
            break;
          }
        }
        if(flag){
          int cur=1;
          for(int i=1; i<=2*len; i++){
            cout<<cur;
            cur=1-cur;
          }
          cout<<endl;
        }
        else{
          cout<<t<<endl;
        }
        
     } 
    
    return 0;
} 