#include<bits/stdc++.h>
using namespace std;

int dfs(){
    return 0;
}

int main(){
    int n,m; cin>>n>>m;
    vector<vector<pair<int, int>>> graph(n);
    for(int edges=0; edges<m; edges++){
        int a,b; cin>>a>>b;
        a--;
        b--;
        graph[a].push_back({b,edges});
        graph[b].push_back({a,edges});
    }

    int bridges = 0;

    for(int edges=0; edges<m; edges++){
        stack<int> check;
        check.push(0);
        vector<bool> visited(n, false);
        visited[0] = true;
        while(!check.empty()){
            int act = check.top();
            check.pop();
            for(auto [vertice, edge] : graph[act]){
                if(edge == edges)continue;
                if(!visited[vertice]){
                    check.push(vertice);
                    visited[vertice] = true;
                }
            }
        }
        for(auto vis : visited){
            if(!vis){
                bridges++;
                break;
            }
        }
    }
    cout<<bridges<<"\n";
    
    return 0;
}