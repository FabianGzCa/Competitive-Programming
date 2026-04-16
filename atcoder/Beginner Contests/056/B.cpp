#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,a,b; cin>>w>>a>>b;
    if(b<a){
        cout<<a-(b+w)<<"\n";
    }else if (b>a+w){
        cout<<b-(a+w)<<"\n";
    }else{
        cout<<"0\n";
    }
    return 0;
}