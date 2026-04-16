#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    int res = 99999999;
    for(long long i=1; i*i <= n; i++){
        if(n%i == 0){
            long long two = n/i;
            res = min(res, max((int)to_string(two).size(), (int)to_string(i).size()));
        }
        
    }
    cout<<res<<"\n";
    
    return 0;
}