#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    REP(i,0,n){
        int cu; std::cin>>cu;
        std::cout<<n-cu+1<<" ";
    }
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
