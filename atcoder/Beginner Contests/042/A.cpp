#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin>>a>>b>>c;
    int cincos=0, sietes=0;
    if(a==5)cincos++;
    if(a==7)sietes++;
    if(b==5)cincos++;
    if(b==7)sietes++;
    if(c==5)cincos++;
    if(c==7)sietes++;
    if(cincos==2 && sietes==1)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}