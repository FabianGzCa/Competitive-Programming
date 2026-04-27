#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int doses = 0, multCuatr=0, noMultCuatr=0;
    for(int i=0; i<n; i++){
        int cu; cin>>cu;
        if(cu%4 == 0){
            multCuatr++;
        }
        else if(cu % 2 == 0){
            doses++;
        }
        else{
            noMultCuatr++;
        }
    }
    if(doses>=1)noMultCuatr++;
    noMultCuatr--;
    if(doses>1 && noMultCuatr == 0){
        cout<<"Yes\n";
    }
    else if(multCuatr>=noMultCuatr){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}