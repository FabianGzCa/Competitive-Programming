// Problem: https://codeforces.com/contest/1708/problem/B
#include<iostream>

int gcd(const int& i,const int& l,const int& r){
    int res = ((l + i-1)/i)*i;
    return (res<=r)?res:-1;
}

void solve(){
    int n, l, r;
    std::cin>>n>>l>>r;
    for(int i=1; i<=n; i++){
        if(gcd(i,l,r) == -1){
            std::cout<<"No\n";
            return;
        }
    }
    std::cout<<"Yes\n";
    for(int i=1; i<=n; i++){
        std::cout<<gcd(i, l, r)<<" ";
    }
    std::cout<<"\n";
}

int main(){
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}