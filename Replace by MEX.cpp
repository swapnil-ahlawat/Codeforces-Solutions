// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int mex(int a[], int n){
    bool mini[n+1];
    memset(mini, false, n+1);
    for(int i=0; i<n; i++){
        mini[a[i]]=true;
    }
    for(int i=0; i<=n; i++){
        if(mini[i]==false) return i;
    }
}
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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> v;
        bool now[n];
        memset(now, false, n);
        for(int i=0; i<n; i++){
            int x= mex(a, n);
            if(x==n) {
                v.push_back(n-1);
                a[n-1]=x;
                now[n-1]=true;
            }
            else {
                int ch=x;
                if(now[x]){
                    for(int j=0; j<n; j++){
                        if(!now[j]){
                            ch=j;
                            i--;
                            break;
                        }
                    }
                }
                if(ch==x) now[ch]=true;
                v.push_back(ch);
                a[ch]=x;
            }
        }
        for(int i=0; i<n; i++){
            int x= mex(a, n);
            if(x==n) {
                break;
            }
            else {
                int ch=x;
                if(now[x]){
                    for(int j=0; j<n; j++){
                        if(!now[j]){
                            ch=j;
                            i--;
                            break;
                        }
                        if(j==n-1){
                            ch=n;
                        }
                    }
                }
                if(ch==n) break;
                if(ch==x) now[ch]=true;
                v.push_back(ch);
                a[ch]=x;
            }
        }
        //for(int i=0; i<n; i++) cout<<a[i];
        //cout<<endl;
        cout<<v.size()<<endl;
        for(auto z: v){
            cout<<z+1<<' ';
        }
        cout<<endl;

        
        
     } 
    
    return 0;
} 