#include<bits/stdc++.h>
using namespace std;
int main(){
    char r,g,b;
    cin>>r>>g>>b;
    string s="";
    int a = stoi(s+r+g+b);
    if(a%4 == 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}