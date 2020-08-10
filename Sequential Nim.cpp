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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int count2=0;
        int i=0;
        while(i<n-1 && a[i]==1) {
            count2++;
            i++;
        }

        if(!(count2 & 1)) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
        
     } 
    
    return 0;
} 