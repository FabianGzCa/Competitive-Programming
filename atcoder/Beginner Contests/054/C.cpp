#include<bits/stdc++.h>
using namespace std;

int res=0;
int n, m;
bool tours[9] = {};

void dfs(vector<int> conections[], int actual, int toured){
    if(toured == n){
        res++;
        return;
    }

    for(int cu : conections[actual]){
        if(tours[cu]) continue;
        tours[actual] = true;
        dfs(conections, cu, toured+1);
        tours[actual] = false;
    }

}

int main(){
    cin>>n>>m;
    vector<int> conections[n+1];
    
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        conections[a].push_back(b);
        conections[b].push_back(a);
    }

    dfs(conections, 1,1);
    cout<<res<<"\n";
    
    return 0;
}