#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, cu, res=-1;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>cu;
        if(cu>=m && res==-1)res=i+1;
    }
    cout<<res<<"\n";
    
    return 0;
}
