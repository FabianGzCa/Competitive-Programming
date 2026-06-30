#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y; cin>>x>>y;
    for(int i=0; i<1000; i++){
        if(y*i == x){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while (tt--) solve();
    return 0;
}