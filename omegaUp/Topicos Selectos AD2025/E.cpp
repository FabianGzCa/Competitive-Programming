#include<iostream>
#include<vector>
typedef long long ll;
typedef std::vector<ll> vl;
#define REP(i,a,n) for(int i=a; i<n; i++)
int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int h, w; std::cin>>h>>w;
    vl res((w+1),0);
    res[w] = 1;
    REP(i,0,h+1){
        REP(j,0, w) res[w-j-1] = res[w-j-1] + res[w-j];
    }
    std::cout<<res[0]<<"\n";
    return 0;
}