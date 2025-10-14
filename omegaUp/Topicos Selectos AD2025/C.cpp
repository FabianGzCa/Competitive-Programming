#include<iostream>
#include<vector>

typedef std::vector<int> vi;
#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int m, n; std::cin>>m>>n;
    vi res(n+1,2000);
    res[0]=0;
    REP(i,0,m){
        REP(j,1,n+1){
            int cu; std::cin>>cu;
            res[j] = cu + std::min(res[j], res[j-1]);
        }
        if(!res[0]) res[0]=2000;
    }
    std::cout<<res[n]<<"\n";
    return 0;
}