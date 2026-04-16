#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x, act=0;cin>>x;
    for(long long i=1; i<999999; i++){
        act+=i;
        if(act >=x){
            cout<<i<<"\n";
            return 0;
        }
    }
    return 0;
}