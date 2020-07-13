#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    n=n+1;
    char str[n];
    cin>>str;
    for(int i=0,N=1; i<n;i+=N){
        cout<<str[i];
        N=N+1;
    }
return 0;
}