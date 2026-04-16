#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int s=0,m=0,l=0;
    while(t--){
        char pizza; int rebanadas;
        cin>>pizza>>rebanadas;
        if(pizza=='S') s+=rebanadas;
        if(pizza=='M') m+=rebanadas;
        if (pizza=='L') l+=rebanadas;
    }
    int res=0;
    res = ((s+5)/6) + ((m+7)/8) + ((l+11)/12);
    cout<<res<<"\n";
    return 0;
}