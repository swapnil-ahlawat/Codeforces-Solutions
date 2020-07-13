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
        
        int n, k;
        cin>>n>>k;
        int a[n];
        int count=0, m=0;
        int umap[n+1] = {0};
        //unordered_map<int, int> umap;
        for(int i=0; i<n; i++){
            cin>>a[i];
        if (!umap[a[i]])
        {
            count++;
        
        }
            umap[a[i]]++;
        }
        if(count>k) cout<<-1<<endl;
        else{
            vector<int> v;
            int index=1;
            for(int i=1; i<n+1; i++)
            {
                if ( umap[i])
                    v.push_back(i);

                if ( umap[i] > 1)
                    index = i;
            }

            for (int i = v.size(); i < k ; i++)
                v.push_back(index);

            cout<<k*n<<endl;
                for(int i=0; i<n; i++){
                    for(int j=0; j<k; j++){
                        cout<<v[j]<<' ';
                    }
                }
                cout<<endl;
        }
        
     } 
    
    return 0;
} 