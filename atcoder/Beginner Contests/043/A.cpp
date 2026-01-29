#include<bits/stdc++.h>
using namespace std;
int main(){
    int C; cin>>C;
    long long total=0, increment=1;
    while(C--){
        total+=increment;
        increment++;
    }
    cout<<total<<"\n";
    return 0;
}