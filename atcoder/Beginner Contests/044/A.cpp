#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x,y; cin>>n>>k>>x>>y;
    int res =0;
    if(n>k) res+= k*x;
    else res+= n*x;
    if(n>k) res+= (n-k)*y;
    cout<<res<<"\n";
    return 0;
}