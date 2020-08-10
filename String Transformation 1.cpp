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
        
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;


        // sort(s1, s1+n);
        // sort(s2, s2+n)
        int count[20][20]={0};
        bool flag=false;
        unordered_map<int, int> umap1;
        for(int i=0; i<n; i++){
            umap1[s1[i]-'a']++;
            count[s1[i]-'a'][s2[i]-'a']++;
            if(s1[i]>s2[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        int ans=0;
        for(int i=0; i<20; i++){
            if(umap1[i]){
                for(int j=i+1; j<20; j++){
                    if(count[i][j]){
                        umap1[j]+= count[i][j];

                        for(int k=j+1; k<20; k++){
                            count[j][k]+=count[i][k];
                        }
                        ans++;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
     } 
    
    
    return 0;
} 