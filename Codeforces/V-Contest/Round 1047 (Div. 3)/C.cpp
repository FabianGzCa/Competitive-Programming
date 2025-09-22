#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    ll a,b; std::cin>>a>>b;
    ll res=0;
    if(b&1){
        res = a*b+1;
    }else{
        res = a*(b/2) + b/(b/2);
    }

    if(res&1){
        std::cout<<"-1\n";
    }else{
        std::cout<<res<<"\n";
    }
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
