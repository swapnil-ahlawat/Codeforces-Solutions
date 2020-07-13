// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

ll pow10 (ll x){
	return x*x*x*x*x*x*x*x*x*x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll k;
    cin>>k;
    ll low=1, mid;
    ll hi=40;
    while(low<hi){
    	mid=(low+hi)/2;
    	if(pow10(mid)==k){
    		break;
    	}
    	else if(pow10(mid)>k){
    		hi=mid;
    	}
    	else{
    		low=mid+1;
    	}
    }
    mid=(low+hi)/2;
    ll sum=pow10(mid);
    //cout<<sum<<endl;
    ll x_num=10;
    ll lx_num=0;
    bool flag=false;
    //cout<<mid<<endl;
    while(sum>=k){
    	sum/=mid;
    	sum*=(mid-1);
    	x_num--;
    	lx_num++;
    	flag=true;
    }	
   	if(flag){
   		x_num++;
   		lx_num--;
   	}
   	char s[]= "codeforces";
   	int i=0;
   	//cout<<x_num<<lx_num<<endl;
   	while(x_num--){
   		for(int j=0; j<mid; j++){
   			cout<<s[i];
   		}
   		i++;
   	}
	while(lx_num--){
   		for(int j=1; j<mid; j++){
   			cout<<s[i];
   		}
   		i++;
   	}   	

    return 0;
} 