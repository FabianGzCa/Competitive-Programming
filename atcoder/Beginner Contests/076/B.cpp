#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int res=1;
    while(n--){
        res = min(res*2, res+k);
    }
    cout<<res<<"\n";
    return 0;
}