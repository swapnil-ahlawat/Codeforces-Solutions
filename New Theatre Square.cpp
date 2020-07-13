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
        
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char inp;
        if((2*x)<y){
            int count=0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cin>>inp;
                    if(inp=='.') count++;
                }
            }
            cout<<(ll)count*x<<endl;
        }
        else{
            long long int sum=0;
            bool flag=false;
            for(int i=0; i<n; i++){
                cin>>inp;
                if(inp=='.') flag=true;
                for(int j=1; j<m; j++){
                    cin>>inp;
                    if(inp=='*'){
                        if(flag) {
                            sum+= x;
                            flag=false;
                        }
                    }
                    else{
                        if(flag){
                            sum+= y;
                            flag=false;
                        }
                        else flag=true;
                    }
                }
                if(flag==true) sum+=x;
                flag=false;
            }
            cout<<sum<<endl;
        }
        
     } 
    
    return 0;
} 