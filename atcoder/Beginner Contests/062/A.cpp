#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y; cin>>x>>y;
    if(x == 2 || y == 2){
        cout<<"No\n";
        return 0;
    }

    vector<int> b = {4,6,9,11};
    int coinc = 0;
    for(int i=0; i<4; i++){
        if(x == b[i] ) coinc++;
        if(y == b[i] ) coinc++;
    }
    if(coinc == 2){
        cout<<"Yes\n";
    }else if (coinc == 1){
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
    }
    return 0;
}