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
    
    int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int each =n/k;
        int p1= min(m, each);
        m= max(0, m-p1);
        k--;
        int p2;
        if(m%k==0){
            p2=m/k;
        }
        else{
            p2=m/k +1;
        }
        cout<<p1-p2<<endl;
     } 
    
    return 0;
} 