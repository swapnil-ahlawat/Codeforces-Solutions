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
        
        int n, x,temp, odd=0, even=0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
          cin>>temp;
          if(temp&1) odd++;
          else even++;
        }
        if(odd==0) {
          cout<<"No"<<endl;
          continue;
        }
        if(!(odd&1)) odd--;
        if(x>=odd){
          x-=odd;
          if(even>=x) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        }
        else{
          if(x&1) cout<<"Yes"<<endl;
          else if(even>0) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        }       
     } 
    
    return 0;
} 