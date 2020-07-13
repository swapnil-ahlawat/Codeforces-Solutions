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
        
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        bool flag=false;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                //cout<<i<<' '<<j<<endl;
                if(i==0){
                    if(j==0 || j==m-1){
                        if(a[i][j]>2){
                            flag=true;
                            break;
                        }
                    }
                        if(a[i][j]>3){
                            flag=true;
                            break;
                        }
                    

                }
                else if(i==n-1){
                    if(j==0 || j==m-1){
                        if(a[i][j]>2){
                            flag=true;
                            break;
                        }
                    }
                        if(a[i][j]>3){
                            flag=true;
                            break;
                        }
                    
                }
                else if(j==0 || j==m-1){
                    if(a[i][j]>3){
                        flag=true;
                        break;
                    }
                }

                else{
                    if(a[i][j]>4){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
        if(!flag){
            for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0){
                    if(j==0 || j==m-1){
                        cout<<2<<' ';
                        
                    }
                    else{
                        cout<<3<<' ';
                    }

                }
                else if(i==n-1){
                    if(j==0 || j==m-1){
                        cout<<2<<' ';
                        
                    }
                    else{
                        cout<<3<<' ';
                    }
                }
                else if(j==0){
                    cout<<3<<' ';
                }
                else if(j==m-1){
                    cout<<3<<' ';
                }
                else cout<<4<<' ';
        }
                cout<<endl;
        }       
     }
     } 
    
    return 0;
}   