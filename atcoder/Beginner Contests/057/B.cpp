#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<pair<int, int>> students(n);
    vector<pair<int, int>> checkpoints(m);
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        students[i] = {a,b};
    }
    for(int i=0; i<m; i++){
        int c,d;
        cin>>c>>d;
        checkpoints[i] = {c,d};
    }

    for(int i=0; i<n; i++){
        int res = 1000000000;
        int dist = 1000000000;
        int a = students[i].first,b=students[i].second;
        for(int j=0; j<m; j++){
            int c=checkpoints[j].first,d=checkpoints[j].second;
            int actDist = min(abs(a-c) + abs(b-d), dist);
            if (actDist<dist){
                dist = actDist;
                res = j+1;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}