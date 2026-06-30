#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m,r,c; cin>>n>>m>>r>>c;
    long long total=0;
    total += m-c;
    total += (n-r) * (m);
    total += (n-r) * (m-1);
    cout<<total<<"\n";
}
int main(){
    int tt; cin>>tt;
    while(tt--)solve();
}