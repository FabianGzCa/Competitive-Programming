#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    bool ok=true;
    for(int i=1; i<=n; i++){
        if(b[i-1] == a[i-1]) continue;
        if(i%2 == 0){
            if(b[i-1] >= a[i-1])continue;
            ok=false;
        }else{
            if(b[i-1] <= a[i-1])continue;
            ok=false;
        }
    }
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while (tt--) solve();
    return 0;
}