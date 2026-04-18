#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c; d = c%b;
    for(int i=1; i<999999; i++){
        if ((a*i) % b == d){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}