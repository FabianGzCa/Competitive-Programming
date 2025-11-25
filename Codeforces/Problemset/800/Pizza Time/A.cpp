#include<iostream>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while(tt--){
        int pizza; cin>>pizza;
        if(pizza<4){
            cout<<"1 \n";
            continue;
        }
        cout<<((pizza-1) /2)<<"\n";
    }
    return 0;
}