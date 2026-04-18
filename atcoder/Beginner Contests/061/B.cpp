#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> ciudades(n, vector<int>());
    while(m--){
        int a, b;
        cin>>a>>b;
        ciudades[a-1].push_back(b);
        ciudades[b-1].push_back(a);
    }
    for(int i=0; i<n; i++){
        cout<<ciudades[i].size()<<"\n";
    }
}