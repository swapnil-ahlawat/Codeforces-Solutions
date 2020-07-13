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
        
        int n, k;
        cin>>n>>k;
        int mid= k/n;
        if(k%n==0) cout<<0<<endl;
        else cout<<2<<endl;
        if(n>=k){
        	int count=k;
        	for(int i=0; i<n; i++){
        		for(int j=0; j<n; j++){
        			if(i==j && count>0) {
        				cout<<1;
        				count--;
        			}
        			else cout<<0;
        		}
        		cout<<endl;
        	}
        	continue;
        }
        if(n==1){
        	if(k==0) cout<<0<<endl;
        	else cout<<1<<endl;
        	continue;
        }
        if(mid==n){
        	for(int i=0; i<n; i++){
        		for(int j=0; j<n; j++){
        			cout<<1;
        		}
        		cout<<endl;
        	}
        	continue;
        }
        int rem= k-n*mid;
        int a[n][n];
        for(int i=0; i<n; i++){
        		for(int j=0; j<n; j++){
        			a[i][j]=0;
        		}

        }
        for(int i=0; i<n; i++){
        	int count=mid;
        	if(rem>0){
        		count++;
        		rem--;
        	}
        	while(count--){
        		a[i][(i+count)%n]=1;
        		
        	}

        }
        for(int i=0; i<n; i++){
        		for(int j=0; j<n; j++){
        			cout<<a[i][j];
        		}
        		cout<<endl;
        }


        
     } 
    
    return 0;
} 