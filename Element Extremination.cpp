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
        for(int i=0; i<n; i++){
            cin>>a[i];
            
        }

        for(int i=0; i<n;){
           while(i<=n-3 && a[i]<a[i+1]){
            a[i+1]=a[i];
            i++;
           }
           i++;
            
        }

       for(int i=n-1; i>=0;){
           while(i>=1 && a[i-1]<a[i]){
            a[i-1]=a[i];
            i--;
           }
           i--;
            
        }
        
        bool flag=false;
        for(int i=0; i<n-1; i++){
            if(a[i+1]!=a[i]){
                flag=true;
                break;
            }
        }


        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
     } 
    
    return 0;
} 