//Problem: https://codeforces.com/contest/1875/problem/A

#include<iostream>
#include<vector>

typedef long long ll;

void solve(){
    ll b, a, n, total=0;
    std::cin>>b>>a>>n;
    total += a;
    for(int i=0; i<n; i++){
        ll cu; std::cin>>cu;
        
        if(cu+1>b){
            total+=b;
            total-=1;
        }
        else total+=cu;
    }
    std::cout<<total<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}