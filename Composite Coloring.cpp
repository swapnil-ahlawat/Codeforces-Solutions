// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{  
  int t;
  cin >> t;
  int ans[1001];
  memset(ans,-1,sizeof(ans));
  int j = 0;
  for (int i = 2 ; i < 39; i++)
  { 
    if ( ans[i] != -1)
    continue;
    
    j++;
    ans[i] = j;
    for (int k = i; k <= 1000; k = k+i )
    { 
      if ( ans[k] == -1)
       ans[k] = j;
    }
  }
  while (t--)
  {
    int n;
    cin >> n;
    int count = 0;
 
    int a[n];
    for (int i = 0 ; i <n ; i++) cin >> a[i];
 
    pair <int,int> mid[n];
 
    for (int i = 0 ; i < n ; i++)
    {
       mid[i] = {ans[a[i]],i};
    }
    sort(mid,mid+n);
 
    int k = 1;
    mid[0].first = 1;
    for (int i = 1 ; i < n ; i++)
    {
        if ( mid[i].first == mid[i-1].first)
        {
             mid[i].first = k;
        }
        else
        {
          k++;
          mid[i].first = k;
        }
    }

    cout<<k<<endl;
    int final[n];
    for(int i=0; i<n; i++){
    	final[mid[i].second]= mid[i].first;
    }
    for (int i = 0 ; i < n ; i++){
        cout<<final[i]<<' ';
      }
    cout<<endl;
 
 
  }
 
}