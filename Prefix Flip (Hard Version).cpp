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
        string a, b;
        vector<int> v;
        cin>>a>>b;
        
        for(int i=1; i<n; i++){
            if(a[i]!=a[i-1]){
                v.push_back(i);
            }
        }
        
        if((a[0]=='1' && v.size()%2==0) || (a[0]=='0' && v.size()%2==1)) v.push_back(n);

        int cur=0;
        for(int i=n-1; i>=0; i--){
            if((int)(b[i]-'0') ^ cur){
                v.push_back(i+1);
                cur= 1^cur;
            }
        }    
        cout<<v.size()<<' ';
        for(int x : v) cout<<x<<' ';
        cout<<endl;
     } 
    
    return 0;
} 