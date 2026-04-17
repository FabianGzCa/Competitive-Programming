#include<bits/stdc++.h>
using namespace std;
int main(){
    string o,e; cin>>o>>e;
    for(int i=0; i<o.size(); i++){
        cout<<o[i];
        if(i == e.size())continue;
        cout<<e[i];
    }
    if(e.size()>o.size()) cout<<e[e.size()-1];
    cout<<"\n";
    return 0;
}