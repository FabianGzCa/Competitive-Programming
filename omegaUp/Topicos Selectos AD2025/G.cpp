#include<iostream>
#include<vector>

typedef std::vector<std::string> vs;
#define REP(i,a,n) for(int i=a; i<n; i++) 

int f, c;

bool busqueda(vs& laberinto, int x, int y){
    if(x<0 || y<0 || x==c || y == f || laberinto[y][x]=='#') return false;
    if(laberinto[y][x] == 'S') return true;
    laberinto[y][x] = '#';
    
    bool N = busqueda(laberinto, x, y+1);
    bool S = busqueda(laberinto, x, y-1);
    bool E = busqueda(laberinto, x+1, y);
    bool W = busqueda(laberinto, x-1, y);
    return (N || S || E || W);
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    std::cin>>f>>c;
    std::cin.ignore();
    vs laberinto(f);
    REP(i,0,f)std::getline(std::cin,laberinto[i]);
    int x = -1, y=-1;
    REP(i,0,f){
        REP(j,0,c){
            if(laberinto[i][j] == 'E'){
                x = j;
                y = i;
                break;
            }
        }
        if(x != -1)break;
    }
    if(busqueda(laberinto, x, y)) std::cout<<"Si\n";
    else std::cout<<"No\n";
    return 0;
}