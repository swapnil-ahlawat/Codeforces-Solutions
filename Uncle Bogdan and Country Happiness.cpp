// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int num[100005], mood[100005], num2[100005], good[100005];
unordered_map<int, vector<int>> adj;

bool dfs2(int cur, int parent){
    good[cur]=0;
    num2[cur]=num[cur];
    for(int x: adj[cur]){
        if(x!=parent){
            bool good2= dfs2(x, cur);
            if(!good2) return false;
            num2[cur]+=num2[x];
            good[cur]+=good[x];
        }
    }
    if(abs(mood[cur])> num2[cur]) return false;
    if((num2[cur]+mood[cur])&1) return false;
    
    ll goodat= (num2[cur]+mood[cur])/2;
    if(good[cur]> goodat) return false;

    good[cur]=goodat;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        adj.clear();
        int n, m, x, y;
        cin>>n>>m;

        for(int i=1; i<=n; i++) {
            cin>>num[i];
        }
        for(int i=1; i<=n; i++) cin>>mood[i];


        for(int i=0; i<n-1; i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        if(dfs2(1, 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

     } 
    
    return 0;
} 