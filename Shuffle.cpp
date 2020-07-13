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
    
    int t;
    cin>>t;
    while(t--){
        
        int n, x, m, temp1, temp2;
        cin>>n>>x>>m;

        vector<pair<int, int>> v;
        bool flag=false;
        for(int i=0; i<m; i++){
            cin>>temp1>>temp2;
            if(!flag){
                if(temp1>x || temp2<x){
                    continue;
                }
                else flag=true;
            }
            v.push_back(make_pair(temp1, temp2));
        }
        int l=x, r=x;
        for(auto x: v){
            if(l<=x.first){
                if(x.first<=r){
                    r=max(x.second, r);
                }
            }
            else{
                if(x.second>=l){
                    r=max(x.second, r);
                    l=x.first;
                }
            }

        }
        cout<<r-l+1<<endl;
        
     } 
    
    return 0;
} 