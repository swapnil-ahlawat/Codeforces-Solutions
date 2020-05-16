#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], b[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) {
		cin>>b[i];
		b[i]=a[i]-b[i];
	}
	sort(b,b+n);
	long long int sum=0;
	for(int i=0; i<n-1; i++){
		int low=i+1;
		int high=n-1;
		int mid;
		
		if(low==high and b[i]+b[high]>0){
		    sum++;
		    continue;
		}
		while(low<high){
			mid=low+(high-low)/2;
			if(b[i]+b[mid]>0){
				high=mid;
			}
			else{
				low=mid+1;
			}
		}
		if(b[i]+b[high]>0) {
		    //cout<<mid<<endl;
		    sum+=n-high;}
	}
	cout<<sum;
}