//Problem: https://codeforces.com/contest/1931/problem/C
#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;
typedef std::vector<int> vi;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    int primero=-1, segundo=-1;

    int cu; std::cin>>cu;
    //Obtener primer y ultimo valor y cuantos hay de cada uno
    //Si son seguidos e iguales , la respuesta es 0
    //Si son seguidos pero separados por intermedios, se toman los de enmedio
    //Si son diferentes, se toma el mayor

}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}