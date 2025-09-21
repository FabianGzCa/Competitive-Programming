//Problem: https://codeforces.com/contest/1543/problem/B
#include<iostream>

typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    ll suma=0;
    ll promedio=0;
    int n; std::cin>>n;
    REP(i,0,n){
        ll cu;
        std::cin>>cu;
        suma+=cu;
    }
    promedio = suma/n;
    promedio*=n;
    suma-=promedio;
    n-=suma;
    std::cout<<suma*n<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}