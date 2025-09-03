//Problem: https://codeforces.com/contest/1594/problem/B
#include<iostream>

using ll = long long;
const ll INF = 1e9+7;

void solve(){
    int n, k; std::cin>>n>>k;
    ll resultado=0;
    ll potencia = 1; 
    for(int i=0; i<32; i++){
        if(k & 1<<i){
            resultado = (resultado + potencia) % INF;
        }
        potencia = (potencia * n) % INF;
    }
    std::cout<<resultado<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}