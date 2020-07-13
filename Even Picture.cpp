// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
vector<pair<int, int>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int odd= (2*n+1);
 	for(int i=0; i<(2*n+1); i++){
 		v.push_back(make_pair(i,0));
 	}
 	for(int i=1; i<(2*n+1); i+=2){
 		v.push_back(make_pair(i,1));
 		v.push_back(make_pair(i,2));
 		v.push_back(make_pair(i,-1));
 		v.push_back(make_pair(i,-2));
 	}
 	v.push_back(make_pair(-1,0));
 	v.push_back(make_pair(-1,1));
 	v.push_back(make_pair(-1,2));
 	v.push_back(make_pair(odd,0));
 	if(n%2){
 		v.push_back(make_pair(odd,-1));
 		v.push_back(make_pair(odd,-2));
 	}
 	else{
 		v.push_back(make_pair(odd,1));
 		v.push_back(make_pair(odd,2));
 	}
 	for(int i=0; i<odd; i+=4){
 		v.push_back(make_pair(i,2));
 	}
 	for(int i=2; i<odd; i+=4){
 		v.push_back(make_pair(i,-2));
 	}
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
    	cout<<v[i].first<<' '<<v[i].second<<endl;
    } 
    return 0;
} 