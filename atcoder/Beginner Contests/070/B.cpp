#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    b = min(b,d);
    c = max(a,c);
    if(c>=b){
        cout<<0<<"\n";
        return 0;
    }else{
        cout<<b-c<<"\n";
    }
    return 0;
}