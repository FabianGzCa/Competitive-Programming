#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int c = (b+2)/3;
    if(a<c){
        cout<<"0\n";
        return 0;
    }
    if(a<(b+1)/2){
        cout<<"1\n";
        return 0;
    }
    int res=0;
    for(int i=(b+1)/2; i<=a; i++){
        res+=3;
    }
    cout<<res<<"\n";

    return 0;
}