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
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=19; i>=0; i--){
    	int mask = 1LL<<i;
    	int m[n];
    	for(int j=0; j<n; j++) m[j]= mask & a[j];
    	int j=0, k=n-1;
    	while(j<k){
    		while(k>=0 && m[k]!=0) k--;
    		while(j<n && m[j]==0) j++;
    		if(j<k){
    			int temp1= a[j], temp2=a[k];
    			a[k]=temp1|temp2;
    			a[j]=temp1&temp2;
    			k--;
    			j++;
    		}
    	}
    	sort(a, a+n);
    }
    ll sum=0;
    for(int i=0; i<n; i++){
    	// cout<<a[i]<<endl;
    	sum+=((long long)a[i]*a[i]);
    }
    cout<<sum<<endl;
} 