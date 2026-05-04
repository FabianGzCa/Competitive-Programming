#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int res=0;
    while(n--){
        int cu; cin>>cu;
        res+= min(2*cu, 2*(k-cu));
    }
    cout<<res<<"\n";
    return 0;
}