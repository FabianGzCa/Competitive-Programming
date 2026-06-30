#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int res=0;
    for(int i=n; i>1; i--){
        res+=i;
    }
    int prim=1;
    while((res+prim) % n != 0)prim++;
    cout<<prim<<" ";
    for(int i=2; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    int tt; cin>>tt;
    while(tt--)solve();
    return 0;
}