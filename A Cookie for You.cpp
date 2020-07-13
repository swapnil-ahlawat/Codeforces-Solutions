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
        
        ll a, b, n, m;
        cin>>a>>b>>n>>m;
        if((a+b)<(n+m)){
        	cout<<"No"<<endl;
        	continue;
        }
        if(a>b){
        	ll temp=a;
        	a=b;
        	b=temp;
        }
        if(a<m) {
        	cout<<"No"<<endl;
        	continue;

        }

        if((a+b-m)>=n ){
        	cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

        
     } 
    
    return 0;
} 