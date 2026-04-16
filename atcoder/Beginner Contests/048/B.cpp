#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c; cin>>a>>b>>c;
    long long ax = ((a+c-1)/c ) * c;
    long long bx = (b / c ) * c;

    if (ax > b){
        cout<<0<<"\n";
        return 0;
    }

    long long res = 1;
    long long dist = bx-ax;
    res+= dist/c;
    cout<<res<<"\n";
    return 0;
}