#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int k;
    ll res;
    std::cin>>k>>res;
    while(k--) res*=2;
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
