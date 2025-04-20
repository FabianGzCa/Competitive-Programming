#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<bitset>

using namespace std;

#define all(x) x.begin(), x.end()
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define se second

using ll = long long;
using pii = pair<int, int>;
using vi = vector<long long>;
using vvi = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vpii = vector<pair<int, int>>;

void solve(){
    ll n,k, res=0, contador=0;
    cin>>n>>k;
    vi left(n);
    vi right(n);
    multiset<ll, greater<ll>> residuos;
    for(int i=0; i<n; i++) cin>>left[i];
    for(int i=0; i<n; i++) cin>>right[i];

    for(int i=0; i<n; i++){
        res+= max(left[i], right[i]);
        residuos.insert(min(left[i], right[i]));
    }
    k-=1;
    res++;
    for(ll i: residuos){
        if(contador==k){
            cout<<res<<"\n";
            return;
        }

        contador++;
        res+= i;
    }
    
    


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}
