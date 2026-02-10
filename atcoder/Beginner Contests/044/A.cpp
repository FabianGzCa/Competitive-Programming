#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,y; cin>>n>>k>>x>>y;
    int yng = n-k, res;
    
    if(yng <0) yng=0;
    if(k>n) k=n;
    res = (x*k) + (y*yng);
    cout<<res<<"\n";
    return 0;
}