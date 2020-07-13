// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    reverse(a, a+n);
    reverse(b, b+m);

    bool flag=false;
    int mini=a[0], j=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[j]) j++;
        if(j==m) break;
    }
    if(j!=m){
        cout<<0<<endl;
        return 0;
    }
    j=0;
    while(a[j]!=b[0]){
        mini=min(mini, a[j]);
        j++;
    }
    if(mini<b[0]){
        cout<<0<<endl;
        return 0;
    }
    ll sum=1LL;
    j++;
    int br=0;

    for(int i=0; i<m-1; i++){
        int ini=j;
        //cout<<ini<<' ';
        if(j==n){
            cout<<0<<endl;
            return 0;
        }
        flag=false;
        while(a[j]!=b[i+1]){
            if(j==n){
                cout<<0<<endl;
                return 0;
            }
            mini= min(a[j], mini);
            if(mini<b[i+1]){
                cout<<0<<endl;
                return 0;
            }
            if(mini<b[i] && !flag){
                br=j;
                flag=true;
            }
            j++;
        }
        //cout<<br<<endl;   
        //cout<<br-ini<<endl;
        if(flag && br!=ini){
            sum= (sum*(br-ini+1)%mod)%mod;
        }
        else if(a[j]==b[i+1] && ini>br){
            //cout<<br<<' '<<ini<<endl;
            sum= (sum*(j-ini+1)%mod)%mod;
        }
        j++;
    }

    while(j!=n){
        mini= min(mini, a[j]);
        if(mini<b[m-1]){
            cout<<0<<endl;
            return 0;
        }
        j++;
    }
    cout<<sum<<endl;
    return 0;
}