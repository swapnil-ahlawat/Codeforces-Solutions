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
        
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        ll max_l=0, max_r=0, max_sum=0, l=0, r=0, sum=0;

        for(int i=0; (i+1)<n; i+=2){
            sum+=a[i+1];
            sum-=a[i];
            if(sum<=0){
                if((i+3)>=n) break;
                l=i+2;
                r=i+3;
                sum=0;
            }
            else{
                r=i+1;
            }
            if(sum>max_sum){
                max_l=l;
                max_r=r;
                max_sum=sum;
            }
        }
        l=1;
        sum=0;
        for(int i=1; (i+1)<n; i+=2){
            sum-=a[i+1];
            sum+=a[i];
            if(sum<=0){
                if((i+3)>=n) break;
                l=i+2;
                r=i+3;
                sum=0;
            }
            else{
                r=i+1;
            }
            if(sum>max_sum){
                max_l=l;
                max_r=r;
                max_sum=sum;
            }
        }
        ll ans=0;
            for(int i=0; i<n; i++){
                if(!(i&1)) ans+=a[i];
            }
            cout<<ans+max_sum<<endl;
        ;
     } 
    
    return 0;
} 