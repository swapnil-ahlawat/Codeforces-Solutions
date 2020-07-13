#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool flag=false;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int l=0; l<n-2; l++){
			for(int j=n-1; j>l; j--){
				if(a[l]==a[j] and j-l>=2){
					flag=true;
					break;
				}
			}
			
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}