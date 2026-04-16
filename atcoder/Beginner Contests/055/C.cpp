#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;cin>>n>>m;
    if(n*2 > m){
        cout<<(m/2)<<"\n";
        return 0;
    }

    long long res = n;
    m-=n*2;
    res += m/4;

    cout<<res<<"\n";
    return 0;
}