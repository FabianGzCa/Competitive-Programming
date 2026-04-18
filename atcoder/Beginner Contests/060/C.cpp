#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,t;
    cin>>n>>t;
    long long res=0;
    long long pas=0;
    while(n--){
        long long cu=0; cin>> cu;

        res += t;

        if(cu-pas < t && res != t){
            res -= t - (cu-pas);
        }

        pas = cu;
    }
    cout<<res<<"\n";
    return 0;
}