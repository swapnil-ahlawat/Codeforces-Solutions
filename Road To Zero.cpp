// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        
        long long int x, y, a, b;
        cin>>x>>y>>a>>b;
        if((2*a)<b){
          cout<<(x+y)*a<<endl;
        }
        else{
          int m=min(x, y);
          x-=m;
          y-=m;
          cout<<m*b+(x+y)*a<<endl;
        }
        
     } 
    
    return 0;
} 