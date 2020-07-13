// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define mod 1000000007    


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int temp1, temp2, deg=0;
        for(int i=1; i<n; i++){
          cin>>temp1>>temp2;

          if(temp1==x || temp2==x) deg++;        
        }
        
        if(deg==1 || deg==0 || (n-2)%2==0) cout<<"Ayush"<<endl;
        else cout<<"Ashish"<<endl;
     } 
    
    return 0;
} 