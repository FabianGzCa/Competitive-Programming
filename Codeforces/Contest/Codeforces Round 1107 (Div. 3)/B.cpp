#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin>>n;
    int digits = to_string(n).size();
    long long y=1;
    for(int i=1; i<= digits; i++){
        y*=10;
    }
    y+=1;
    cout<<y<<"\n";
    return;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while (tt--) solve();
    return 0;
}