//Problem: https://codeforces.com/contest/1582/problem/B
#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)



void solve(){
    ll res=0;
    ll ceros=0;
    int n; std::cin>>n;
    int cn;
    REP(i,0,n){
        std::cin>>cn;
        if(cn==0)ceros++;
        if(cn==1)res++;
    }
    res *= (1LL<<ceros);
    std::cout<<res<<"\n";

}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}