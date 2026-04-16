#include<bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
int main(){
    int n; cin>>n;
    long long power=1;
    for(int i=1; i<=n; i++){
        power = (power * i) % MOD;
    }
    cout<<power<<"\n";
    return 0;
}