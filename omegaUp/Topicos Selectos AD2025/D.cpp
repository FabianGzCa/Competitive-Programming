#include<iostream>
#include<vector>

typedef std::vector<int> vi;
typedef std::vector<std::vector<bool>> vbb;
#define REP(i,a,n) for(int i=a; i<n; i++)
int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int n; std::cin>>n;
    vi nums(n);
    REP(i,0,n) std::cin>>nums[i];
    int inicio, max; std::cin>>inicio>>max;
    vbb posibles(n+1, std::vector<bool>(max+1,false));
    posibles[0][inicio] = true;
    REP(i,0,n){
        REP(j,0,max+1){
            if(!posibles[i][j]) continue;
            if (j-nums[i] >= 0) posibles[i+1][j-nums[i]] = true;
            if (j+nums[i] <= max) posibles[i+1][j+nums[i]] = true;
        }
    }
    int res=-1;
    REP(i,0,(max+1)){
        if(posibles[n][i]) res = i;
    }
    std::cout<<res<<"\n";
    return 0;
}