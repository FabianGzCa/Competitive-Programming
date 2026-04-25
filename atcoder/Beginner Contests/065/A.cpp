#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin>>c>>a>>b;
    if(b<=a){
        cout<<"delicious\n";
        return 0;
    }
    b-=a;
    if(b<=c){
        cout<<"safe\n";
    }else{
        cout<<"dangerous\n";
    }
    return 0;
}