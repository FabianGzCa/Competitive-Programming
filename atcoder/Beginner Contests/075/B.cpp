#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, w; cin>>h>>w;
    vector<vector<char>> buscaminas(h, vector<char>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            char cu; cin>>cu;
            buscaminas[i][j] = cu;
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            int cont=0;
            if(buscaminas[i][j] == '#'){
                cout<<"#";
                continue;
            }
            if(i>0){
                if(j>0){
                    if(buscaminas[i-1][j-1] == '#')cont++;
                }
                if(buscaminas[i-1][j] == '#') cont++;
            }
            if(j<w-1){
                if(i>0){
                    if(buscaminas[i-1][j+1] == '#')cont++;
                }
                if(buscaminas[i][j+1] == '#') cont++;
            }
            if(i<h-1){
                if(j<w-1){
                    if(buscaminas[i+1][j+1] == '#')cont++;
                }
                if(buscaminas[i+1][j] == '#') cont++;
            }
            if(j>0){
                if(i<h-1){
                    if(buscaminas[i+1][j-1] == '#')cont++;
                }
                if(buscaminas[i][j-1] == '#')cont++;
            }

            cout<<cont;
        }
        cout<<"\n";
    }

    return 0;
}