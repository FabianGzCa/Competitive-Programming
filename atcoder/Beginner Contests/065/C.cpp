#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007LL;

ll factos(long long n){
    ll res =1;
    for(int i=1; i<=n; i++){
        res = res * i % MOD;
    }
    return res;
}

int main(){
    ll n,m; cin>>n>>m;
    if(max(n,m) - min(n,m) > 1){
        cout<<"0\n";
        return 0;
    }

    ll res = 0;
    if(n==m){
        res = factos(n);
        res = res*res % MOD;
        res = res*2 % MOD;
        cout<<res<<"\n";
    }else{
        ll mymin, mymax;
        mymin = factos(n);
        mymax = factos(m);
        res = mymin * mymax % MOD;
        cout<<res<<"\n";
    }

    return 0;
}