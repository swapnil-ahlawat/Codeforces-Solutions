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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            a[i]= abs(a[i]);
            if(i%2){
                a[i]*=-1;
            }
        }
        for(int i=0; i<n; i++) cout<<a[i]<<' ';
        cout<<endl;
        
     } 
    
    return 0;
} 