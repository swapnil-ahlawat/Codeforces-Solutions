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
        
        int n;
        cin>>n;
        int x=n/4;
        if(n%4) x++;
        string s="";

        for(int i=0; i<n-x; i++){
            s+='9';
        }
        while(x--) s+='8';
        cout<<s<<endl;
        
     } 
    
    return 0;
} 