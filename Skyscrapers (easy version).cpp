#include <bits/stdc++.h>
using namespace std;
long long int peaker(int a[], int n, int m, int temp[]){
    temp[m]=a[m];
    long long int c=a[m];
    int mini=a[m];
    for(int i=m+1; i<n;  i++){
        mini=min(mini, a[i]);
        temp[i]=mini;
        c+=mini;
    }
    mini=a[m];
    for(int i=m-1; i>=0;  i--){
        mini=min(mini, a[i]);
        temp[i]=mini;
        c+=mini;
    }
    return c;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int temp[n], ans[n];
    long long int maxic=0;
	for(int i=0; i<n; i++){
	    long long int temper= peaker(a, n, i, temp);
	    if(temper>maxic){
	        maxic=temper;
	        for(int j=0; j<n; j++){
	            ans[j]=temp[j];
	        }
	    }
	}
	for(int i=0; i<n; i++){
	   cout<<ans[i]<<' ';
	}
	return 0;
}