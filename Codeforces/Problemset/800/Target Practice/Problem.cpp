#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    int res=0;
    for(int i=0; i<10; i++){
        string cu; cin>>cu;
        for(int j=0; j<10; j++){
            if(cu[j] == '.') continue;
            res+= min({i, j, 9-i, 9-j})+1;
        }
    }
    cout<<res<<"\n";
}
int main(){
    int tt; cin>>tt;
    while(tt--) solve();
}