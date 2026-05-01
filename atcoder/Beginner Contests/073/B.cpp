#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res=0;
    while(n--){
        int a,b;cin>>a>>b;
        res+= (b-a)+1;
    }
    cout<<res<<"\n";
}