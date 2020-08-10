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
        
        int n, m, temp;
        cin>>n>>m;
        int b[m];
        unordered_map<int, int> umap;
        for(int i=0; i<n; i++){
            cin>>temp;
            umap[temp]=true;
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        bool flag=false;
        for(int i=0; i<m; i++){
            if(umap[b[i]]){
                flag=true;
                temp=b[i];
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl<<"1 "<<temp<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
     } 
    
    return 0;
} 