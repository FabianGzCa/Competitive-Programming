#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    long long res=k;
    n--;
    long long k2 = k-1;
    while(n--){
        res*= k2;
    }
    cout<<res<<"\n";
    return 0;
}