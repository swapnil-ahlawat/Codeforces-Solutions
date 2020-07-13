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
        ll a, b, n, temp;
        cin>>a>>b>>n;
        if(b>a) swap(a, b);
        int count=0;
        while(a<=n){
        	temp=a;
        	a+=b;
        	b=temp;
        	count++;
        }
        cout<<count<<endl;

        
     } 
    
    return 0;
} 