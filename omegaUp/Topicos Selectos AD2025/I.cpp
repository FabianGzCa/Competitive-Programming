#include<iostream>
#include<vector>

typedef std::vector<int> vi;
typedef std::vector<vi> vii;

#define REP(i,a,n) for(int i=a; i<n; i++)

int N, M, K;
int revisar(vii& img, int y, int x, int valAnt){
    if(y < 0 || x < 0 || y >= N || x >=M || img[y][x] == 1002) return 0;
    int res=0, ant= img[y][x];
    if(img[y][x] >= valAnt-K){
        res++;
        img[y][x] = 1002;
    }else return 0;
    res+= revisar(img, y+1, x, ant);
    res+= revisar(img, y, x+1, ant);
    res+= revisar(img, y-1, x, ant);
    res+= revisar(img, y, x-1, ant);
    return res;

}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    std::cin>>N>>M>>K;
    vii img(N, vi(M));
    int nebY, nebX, max=0;
    REP(i,0,N){
        REP(j,0,M){
            std::cin>>img[i][j];
            if(img[i][j]>max){
                max=img[i][j];
                nebY = i; nebX = j;
            }
        }
    }

    int res = revisar(img, nebY, nebX, (img[nebY][nebX]));
    std::cout<<res<<"\n";

    return 0;
}