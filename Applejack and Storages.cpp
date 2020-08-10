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
    
    int n, x;
    cin>>n ;
    unordered_map<int, int> umap;
    multiset<int> fours, twos;
    for(int i=0; i<n; i++){
    	cin>>x;
    	umap[x]++;
    	if(umap[x]==2) {
    		twos.insert(x);
    	}
    	else if(umap[x]==4){
    		twos.erase(x);
    		fours.insert(x);
    	}
    	else if(umap[x]==6){
    		twos.insert(x);
    	}
    	else if(umap[x]==8){
    		twos.erase(x);
    		fours.insert(x);
    	}
    }
    int q;
    char sign;
    cin>>q;
    while(q--){
    	cin>>sign>>x;
    	if(sign=='+'){
    		umap[x]++;
    		if(umap[x]==2) {
    			twos.insert(x);
    		}
	    	else if(umap[x]==4){
	    		twos.erase(x);
	    		fours.insert(x);
	    	}
	    	else if(umap[x]==6){
	    		twos.insert(x);
	    	}
	    	else if(umap[x]==8){
	    		twos.erase(x);
	    		fours.insert(x);
    		}
    	}
    	else {
    		umap[x]--;
    		if(umap[x]==1) twos.erase(x);
	    	else if(umap[x]==3){
	    		twos.insert(x);
	    		fours.erase(x);
	    	}
	    	else if(umap[x]==5){
	    		twos.erase(x);
	    	}
	    	else if(umap[x]==7){
	    		fours.erase(x);
	    		twos.insert(x);
	    		fours.insert(x);
	    	}
    	}

  		if(fours.size()>=2) cout<<"YES"<<endl;
  		else if(fours.size()==1 && twos.size()>=2) cout<<"YES"<<endl;
  		else cout<<"NO"<<endl;

    }
    
    return 0;
} 