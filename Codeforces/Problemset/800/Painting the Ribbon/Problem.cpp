#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, k; cin>>n>>m>>k;
    if(n-((n+m-1)/m) > k){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}
int main(){
    int tt; cin>>tt;
    while(tt--)solve();
    return 0;
}