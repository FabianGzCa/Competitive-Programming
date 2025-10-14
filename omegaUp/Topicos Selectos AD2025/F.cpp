#include<iostream>
#include<vector>
#include<climits>

typedef long long ll;
typedef std::vector<long long> vl;
typedef std::vector<vl> vll;
#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    int n,m; std::cin>>n>>m;
    vll sky(2,vl(m+2, LONG_LONG_MAX));
    REP(i,1,m+1) std::cin>>sky[0][i];
    REP(i,1,n){
        int idx;
        if(i&1) idx=1; else idx=0;
        REP(j,1,m+1){
            std::cin>>sky[idx][j];
            sky[idx][j] += std::min(sky[idx^1][j-1],std::min(sky[idx^1][j],sky[idx^1][j+1]));
        }
    }
    ll minRes=LONG_LONG_MAX;
    REP(i,1,m+1){
        minRes = std::min(minRes, sky[(n-1)&1][i]);
    }
    std::cout<<minRes<<"\n";
    return 0;
}