#include<iostream>
#include<vector>
#include<queue>

typedef std::vector<int> vi;
typedef std::vector<vi> vii;

#define REP(i,a,n) for(int i=a; i<n; i++)

const int INF = 10000;

struct Coords{
    int x;
    int y;
    int val;
};

std::queue<Coords> cola;

void calcularAlrededores(vii& prado, Coords actual){
    int alrededores = actual.val+1;
    // arriba
    if(actual.y > 0){
        //arriba izquierda
        if(actual.x > 0){
            if (alrededores < prado[actual.y-1][actual.x-1]){
                prado[actual.y-1][actual.x-1] = alrededores;
                cola.push({actual.x-1, actual.y-1, alrededores});
            }
        }
        if (alrededores < prado[actual.y-1][actual.x]){
            prado[actual.y-1][actual.x] = alrededores;
            cola.push({actual.x, actual.y-1, alrededores});
        }
    }
    //izquierda
    if (actual.x > 0){
        //abajo izquierda
        if(actual.y < 1000){
            if (alrededores < prado[actual.y+1][actual.x-1]){
                prado[actual.y+1][actual.x-1] = alrededores;
                cola.push({actual.x-1, actual.y+1, alrededores});
            }
        }
        if (alrededores < prado[actual.y][actual.x-1]){
            prado[actual.y][actual.x-1] = alrededores;
            cola.push({actual.x-1, actual.y, alrededores});
        }

    }
    //abajo
    if (actual.y < 1000){
        //abajo derecha
        if(actual.x < 1000){
            if (alrededores < prado[actual.y+1][actual.x+1]){
                prado[actual.y+1][actual.x+1] = alrededores;
                cola.push({actual.x+1, actual.y+1, alrededores});
            }
        }
        if (alrededores < prado[actual.y+1][actual.x]){
            prado[actual.y+1][actual.x] = alrededores;
            cola.push({actual.x, actual.y+1, alrededores});
        }
    }
    //derecha
    if (actual.x < 1000){
        //arriba derecha
        if(actual.y > 0){
            if (alrededores < prado[actual.y-1][actual.x+1]){
                prado[actual.y-1][actual.x+1] = alrededores;
                cola.push({actual.x+1, actual.y-1, alrededores});
            }
        }
        if (alrededores < prado[actual.y][actual.x+1]){
            prado[actual.y][actual.x+1] = alrededores;
            cola.push({actual.x+1, actual.y, alrededores});
        }
    }
}

int main(){
    int N, Q; std::cin>>N>>Q;
    
    vii ovejas(2, vi(N));
    vii preguntas(2, vi(Q));
    vii prado(1001, vi(1001, INF));

    REP(i,0,N){
        std::cin>>ovejas[0][i]>>ovejas[1][i];
        prado[ovejas[1][i]][ovejas[0][i]] = 0;
        cola.push({ovejas[0][i], ovejas[1][i], 0}); 
    }
    REP(i,0,Q) std::cin>>preguntas[0][i]>>preguntas[1][i];

    while(!cola.empty()){
        Coords actual = cola.front();
        cola.pop();
        calcularAlrededores(prado, actual);
    }

    REP(i,0,Q){
        std::cout<<prado[preguntas[1][i]][preguntas[0][i]]<<"\n";
    }
    return 0;
}