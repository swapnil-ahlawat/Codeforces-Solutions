#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define testcases int t; cin>>t; while(t--);
#define endl '\n';



int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<endl;
		}
		else if(b>a){
			if((b-a)%2==1){
			    cout<<1<<endl;
			}
			else cout<<2<<endl;
		}
		else{
			if((b-a)%2==0){ cout<<1<<endl;
			}
			else cout<<2<<endl;
		}
	}
	return 0;
}