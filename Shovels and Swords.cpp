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
        
        int a, b;
        cin>>a>>b;
        if(a==0|| b==0){
            cout<<0<<endl;
            continue;
        }
        if(b>a) swap(a,b);
        if(a>=2*b){
            cout<<b<<endl;
            continue;
        }
        int diff= a-b;
        b-=diff;
        b*=2;
        diff+=b/3;
        cout<<diff<<endl;
     } 
    
    return 0;
} 