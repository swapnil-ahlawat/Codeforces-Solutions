// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char, int> umap;
        unordered_map<int, bool> vis;
        int total=0, count=0;
        for(int i=0; i<k; i++){
            count=0;
            int j=0;
            while((j*k+i)<n) {
                if(vis[j*k+i]==false){
                    umap[s[j*k+i]]++;
                    vis[j*k+i]=true;
                 }   
                j++;
            }
            j=0;
            while((n-i-1-j*k)>=0) {
                if(vis[n-i-1-j*k]==false){
                    umap[s[n-i-1-j*k]]++;
                    vis[n-i-1-j*k]=true;
                }
                j++;
            }
            char maxc=s[i];
            int maxi=0;
            for(auto u: umap){
                if(u.second> maxi){
                    maxi=u.second;
                    maxc=u.first;
                }
            }
            j=0;
            while((j*k+i)<n) {
                if(s[j*k+i]!=maxc){
                    s[j*k+i]=maxc;
                    count++;
                } 
                j++;
            }
            j=0;
            while((n-i-1-j*k)>=0) {
                if(s[n-i-1-j*k]!=maxc){
                    s[n-i-1-j*k]=maxc;
                    count++;
                } 
                j++;
            }
            total+=count;

            umap.clear();
        }
    cout<<total<<endl;
        
     } 
    
    return 0;
}   