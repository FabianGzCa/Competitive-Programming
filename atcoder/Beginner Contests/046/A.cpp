#include<iostream>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    int res=1;
    if(a!=b)res++;
    if(b!=c && a!=c)res++;
    cout<<res<<"\n";
    return 0;
}