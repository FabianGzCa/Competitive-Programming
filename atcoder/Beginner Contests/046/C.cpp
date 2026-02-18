#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n; cin>>n;
    int n2=n;
    ll X, Y, T, A;
    while(n2--){
        cin>>T>>A;
        if(n2 == n-1){
            X=T;
            Y=A;
            continue;
        }

        ll avg, avg1, avg2;
        avg1 = ((X + T-1) / T);
        avg2 = ((Y + A-1) / A);
        avg = max(avg1, avg2);
        X = T*avg;
        Y = A*avg;
    }
    cout<<X+Y<<"\n";
    return 0;
}