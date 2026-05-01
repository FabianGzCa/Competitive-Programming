#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
int main(){
    ll n; cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    long long res = 0;
    if(n == 1){
        res=3;
    }else{
        for(int i=0; i<n; i++){
            res = (res + 2) % MOD;
        }
    }
    cout<<res<<"\n";
    return 0;
}