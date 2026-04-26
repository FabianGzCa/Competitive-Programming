#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int res=1, mult=1;
    while(mult <= n){
        res = mult;
        mult*=2;
    }
    cout<<res<<"\n";
    return 0;
}