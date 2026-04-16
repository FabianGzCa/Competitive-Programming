#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    long long res = 1;
    map<int, int> exp;

    for(int i=2; i<=n; i++){
        int x = i;
        for(int j=2; j*j<=x; j++){
            while(x%j == 0){
                exp[j]++;
                x /= j;
            }
        }
        if(x>1){
            exp[x]++;
        }
    }
    for(auto  [a, b] : exp){
        res*=  (long long) (b+1);
        res = res % 1000000007ll;
    }
    cout<<res<<"\n";
    return 0;
}