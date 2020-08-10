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
        if(n<=30) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n==36) cout<<"6 10 15 5"<<endl;
            else if (n==40) cout<<"6 14 15 5"<<endl;
            else if(n==44) cout<<"6 10 15 13"<<endl;
            else cout<<"6 10 14 "<<n-30<<endl;
        }
        
     } 
    
    return 0;
} 