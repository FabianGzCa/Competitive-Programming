#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
typedef vector<ll> vl;
typedef vector<vector<ll>> vll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    ll dia=0, orden=0, diaMin=LLONG_MAX, ordenMin=LLONG_MAX;
    cin>>n;
    vl ingredientes(n), sumas(n,0);
    for(int i=0; i<n; i++) cin>>ingredientes[i];
    cin>>m;
    vll ordenes(n,vector<ll>(m));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) cin>>ordenes[j][i], sumas[j]+=ordenes[j][i];
    }

    for(int i=0; i<n; i++){
        if((!sumas[i] && !ingredientes[i]) || !sumas[i])continue;
        diaMin = min(diaMin, ingredientes[i]/sumas[i] + 1);
    }
    cout<<diaMin<<" ";

    for(int i=0; i<n; i++){
        ingredientes[i] -= sumas[i]*(diaMin-1);
    }
    int solv=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ingredientes[j] -= ordenes[j][i];
            if(ingredientes[j] < 0){
                ordenMin=i+1;
                solv=1;
                break;
            }
        }
        if(solv) break;
    }
    cout<<ordenMin<<"\n";
    
    return 0;
}
