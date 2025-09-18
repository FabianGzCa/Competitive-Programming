//Problem: https://codeforces.com/contest/1945/problem/B

#include<iostream>

void solve(){
    long long a,b,m, res=0;
    std::cin>>a>>b>>m;
    res+=m/a+1;
    res+=m/b+1;
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}