// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    int p[n];
    vector<int> v;
    long long int maxi=0;
    for(int i=0; i<n; i++) {
    	cin>>p[i];
    	if(p[i]>=(n-k+1)){
			v.push_back(i);
			maxi+=p[i];
    	}
    }
    long long int x=1;
    for(int i=1; i<v.size(); i++){
    	x*=(v[i]-v[i-1]);
    	x%=998244353;
    }
    cout<<maxi<<' '<<x%998244353<<endl;
    return 0;
} 