#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<pair<int, int>> boats(m);
    map<int,int> disponibles;
    bool puede=false;
    for(int i=0; i<m; i++){
        int x, y; cin>>x>>y;
        boats[i] = {x,y};
        if(x == n){
            disponibles[y] = true;
            if(y==1) puede=true;
        }
        if(y == n){
            disponibles[x] = true;
            if(x==1) puede=true;
        }
    }

    for(int i=0; i<m; i++){
        if(disponibles[boats[i].first] && boats[i].second == 1){
            puede = true;
        }
        if(disponibles[boats[i].second] && boats[i].first == 1){
            puede = true;
        }
    }
    if(puede){
        cout<<"POSSIBLE\n";
    }else{
        cout<<"IMPOSSIBLE\n";
    }
    return 0;
}