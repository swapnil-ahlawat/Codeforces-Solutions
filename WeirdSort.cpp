#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n';

bool insertionSort(int arr[], int n, int p[], int m)  
{ 
	bool found=true;
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  	found=false;
            for(int k=0; k<m; k++){
            	if(p[k]==j){
            		found=true;
            		break;
            	}
            	else if(p[k]>j) break;
            }
            if(found){
            arr[j + 1] = arr[j];  
            j--;  
        	}
        	else{
        		return found;
        	}
        }  
        arr[j + 1] = key;  
    }
    return found;  
}  

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n], p[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>p[i];
			p[i]--;
		}
	    sort(p, p+m);
		bool flag=insertionSort(a,n,p,m);
		if(flag) {
		    cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}

	return 0;
}