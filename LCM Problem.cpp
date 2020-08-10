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
        
        ll l, r;
        cin>>l>>r;
        if(2*l<=r) cout<<l<<' '<<2*l<<endl;
        else  cout<<-1<<' '<<-1<<endl;
        
     } 
    
    return 0;
} 