#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x; cin>>x;
    long long actual = x/11;
    long long actual2 = actual*11;
    long long res = actual*2;
    if(actual2 < x){
        if(actual2+6ll >= x) res+=1ll;
        else res+=2ll;
    }
    cout<<res<<"\n";

}