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
        
        int n, m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0; i<n; i++){
        	for(int j=0; j<m; j++){
        		cin>>a[i][j];
        	}
        }
        int count=0;
        for(int i=0; i<n-1; i++){
        	if(a[i][m-1]=='R') count++;
        } 
        for(int i=0; i<m-1; i++){
        	if(a[n-1][i]=='D') count++;
        } 
        cout<<count<<endl;   

     } 
    
    return 0;
} 