// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    long long int b[n];
    for(int i=0; i<n; i++) cin>>b[i];
    long long int x=0;
	cout<<b[0]<<' ';
    for(int i=1; i<n; i++){
    	x=max(x, b[i-1]+x);
    	cout<<b[i]+x<<' ';
    }
    cout<<endl;
    return 0;
} 