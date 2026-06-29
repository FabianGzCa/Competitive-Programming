#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l1, l2, l3, b1, b2, b3; cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(l1 == l2 && l2 == l3){
        if(l1 == (b1+b2+b3)){
            cout<<"YES\n";
            return;
        }
    }
    if(b1==b2 && b2==b3){
        if(b1 == (l1+l2+l3)){
            cout<<"YES\n";
            return;
        }
    }

    if(l1 == l2+l3){
        if(b2 == b3){
            if(l1 == b1+b2){
                cout<<"YES\n";
                return;
            }
        }
    }
    if(b1 == b2+b3){
        if(l2 == l3){
            if(b1 == l1+l2){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    return;
}
int main(){
    int tt; cin>>tt;
    while(tt--)solve();
    return 0;
}