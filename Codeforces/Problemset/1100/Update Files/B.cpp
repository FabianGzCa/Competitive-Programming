//Problem: https://codeforces.com/contest/1606/problem/B
#include<iostream>

using ll = long long;
using ull = unsigned long long;

void solve(){
    ll k, n;
    ull res=1;
    ll hours=0;
    std::cin>>k>>n;

    for(int i=0; i<=n+1; i++){
        if(i>n || res>=k || res > n ){
            break;
        }
        res*=2;
        hours++;
    }
    k-=res;
    k+=n-1;
    if(k>=n) hours += k/n;

    std::cout<<hours<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}