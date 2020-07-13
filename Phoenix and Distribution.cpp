// Created by swapnil_a01
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{ 
   int t;
   cin >> t;
   while(t--)
   {
     int n,k;
     cin >> n >> k;
     char c[n];

     for(int i=0; i<n; i++) cin >> c[i];
     sort(c,c+n);
     
     if (n==k)
     {
      cout<< c[k-1] << endl;
      continue;
     }
     if ( c[k-1] == c[0])
     {
      int count = 0;
      
      for(int i=k; i<n-1; i++)
      {
        if ( c[i] != c[i+1])
        {
          count = 1;
          break;
        }
      }
        if ( count == 0)
        { int tempo;
          if ( (n-k)%k == 0)
           tempo =(n-k)/k;
          else
             tempo = (n-k)/k + 1;

          cout << c[k-1];
          for(int i=0; i<tempo; i++) cout << c[k];

          cout << endl;
        }
        else
        {
          for(int i=k-1; i<n; i++)
          cout << c[i];

          cout<< endl;
        }
            continue;
      }
       
     else
     {
      cout << c[k-1]<<endl;
     }

   }
    return 0;
}