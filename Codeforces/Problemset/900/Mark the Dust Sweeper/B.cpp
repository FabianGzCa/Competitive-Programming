//Problem: https://codeforces.com/contest/1705/problem/B

#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    int cu;
    ll res=0;
    REP(i,0,n){
        std::cin>>cu;
        if(res!=0 && cu==0 && i!=n-1){
            res++;
        }
        if(i!=n-1){
            res+=(ll) cu;
        }
    }
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}