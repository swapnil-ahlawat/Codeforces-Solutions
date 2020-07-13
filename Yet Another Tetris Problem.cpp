#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a, a+n);
		int flag=false;
		for(int i=0; i<n-1; i++){
			if((a[n-1]-a[i])%2){
				flag=true;
				break;
			}
		}
		if(flag) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}


	return 0;
}