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
        
        string s;
        cin>>s;
        int n=s.length(), maxi=0;
        unordered_map<char, int> umap;
        for(char x:s) umap[x]++;

        for(auto it: umap){
            maxi= max(maxi, it.second);
        }

        unordered_map <string, int> umap2;
        int max_count=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(i==j) continue;
                int count=0, k=0;
                while(k<s.length()){
                    if(s[k]=='0'+i){
                        while(k<s.length()){
                            if(s[k]=='0'+j){
                                count++;
                                break;
                            }
                            k++;
                        }
                    }
                    k++;
                }
                max_count= max(max_count, count);
            }
        }

        cout<<min(n-maxi, n-2*max_count)<<endl;
        
     }
    
    return 0;
} 
