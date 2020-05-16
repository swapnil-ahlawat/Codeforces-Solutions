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
    	int n;
    	cin>>n;
    	if(n==1) cout<<-1<<endl;
    	else if ((2*n+1)%3){
    		for(int i=0; i<n-1; i++) cout<<2;
    		cout<<3<<endl;
    	}
    	else {
    		for(int i=0; i<n-2; i++) cout<<2;
    		cout<<33<<endl;
    	}
    }
    
    cout<<endl;
    return 0;
} 