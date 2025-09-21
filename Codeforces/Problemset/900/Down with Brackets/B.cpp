//Problem: https://codeforces.com/contest/2110/problem/B

#include<iostream>
#include<vector>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    std::string cadena; std::cin>>cadena;
    char anterior = 0;
    int parejos = 0;
    REP(i,0,cadena.length()){

        if(anterior == ')' && cadena[i]=='(' && parejos == 0){
            std::cout<<"Yes\n";
            return;
        }
        if(cadena[i] == '(') parejos++;
        if(cadena[i] == ')') parejos--;
        anterior = cadena[i];
    }
    std::cout<<"No\n";
    
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}