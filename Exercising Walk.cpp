// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long int a,b,c,d,x,y,x1,y1,x2,y2, fx, fy;
    while(t--){
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        fx= b-a+x;
        fy= d-c+y;
        bool flag=false;

        if(a==b and a!=0){
            if(!(((x+1)>=x1 && (x+1)<=x2) || ((x-1)>=x1 && (x-1)<=x2))) flag=true;   
        }

        if(c==d and c!=0){
            if(!(((y+1)>=y1 && (y+1)<=y2) || ((y-1)>=y1 && (y-1)<=y2))) flag=true;   
        }

        if(!(fx>=x1 && fx<=x2 && fy>=y1 && fy<=y2)) flag=true;
        if(flag) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;  
     }
    
    return 0;
} 