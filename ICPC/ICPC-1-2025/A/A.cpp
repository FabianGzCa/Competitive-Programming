#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string inicial, cu;
    int n;
    cin>>inicial>>n;
    for(int i=0; i<n; i++){
        cin>>cu;
        if(cu.size()%inicial.size()){
            cout<<"No\n";
            continue;
        }
        int cupo=1;
        for(int j=0; j<cu.size(); j++){
            if(inicial[j%inicial.size()] != cu[j]){
                cout<<"No\n";
                cupo=0;
                break;
            }
        }
        if(cupo) cout<<"Yes\n";
    }
    return 0;
}
