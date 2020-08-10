// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;

    ll ans=1, neg=1;
    for(int i=1; i<=n; i++) ans= (ans*i)%mod;
    for(int i=1; i<n; i++) neg= (neg*2)%mod;

    cout<<(((ans-neg)%mod) + mod)%mod<<endl;
    return 0;
} 