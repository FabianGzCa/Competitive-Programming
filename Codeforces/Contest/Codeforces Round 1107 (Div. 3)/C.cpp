#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string word; cin>>word;
    int cambios=0;
    char ant='c';
    for(char cu : word){
        if(cu != ant){
            cambios++;
            ant = cu;
        }
    }
    if(cambios == 2){
        cout<<"2\n";
        return;
    }
    cout<<"1\n";
    return;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while (tt--) solve();
    return 0;
}