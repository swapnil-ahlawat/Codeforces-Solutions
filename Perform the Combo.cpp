#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		string a;
		int cnt[26]={0};
		int p[m];
		cin>>a;
		for(int i=0; i<n; i++)
			cnt[a[i]-'a']++;

		for(int i=0; i<m; i++){
			cin>>p[i];
		}
		sort(p,p+m);
		int min=p[0];
		for(int i=0; i<p[0]; i++)
			cnt[a[i]-'a']+=m;

		for(int i=1; i<m ; i++){
			//int temp=p[i]-min;
			for(int j=min; j<p[i]; j++)
				cnt[a[j]-'a']+=m-i;
			min=p[i];
		}
		for(int i=0; i<26; i++){
			cout<<cnt[i]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}