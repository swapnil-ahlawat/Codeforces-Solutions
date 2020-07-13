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
        
        ll a, b, c;
        cin>>a>>b>>c;
        
        if(a<c){
        	cout<<1<<' ';
        	if(c< b*a) cout<<b<<endl;
        	else cout<<-1<<endl;
        }
        else{
        	cout<<-1<<' ';
        	cout<<b<<endl;
        }


        
     } 
    
    return 0;
} 