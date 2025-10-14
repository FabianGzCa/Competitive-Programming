#include<iostream>
#include<vector>

typedef std::vector<int> vi;
typedef std::vector<vi> vii;

#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int N, C; std::cin>>N>>C;
    vii obj(2,vi(N));
    vii res(2,vi(C+1,0));
    REP(i,0,N)std::cin>>obj[0][i]>>obj[1][i];

    REP(i,0,N){
        REP(j,0,C+1){
            if(j<obj[0][i]) res[i&1][j] = res[(i&1)^1][j];
            else{
                int actual =  obj[1][i] + res[(i&1)^1][j-obj[0][i]];
                int pasado =  res[(i&1)^1][j];
                res[i&1][j] = std::max(actual,pasado);
            }
        }
    }
    std::cout<<res[(N-1)&1][C]<<"\n";
    return 0;
}