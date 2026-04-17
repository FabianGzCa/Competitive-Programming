#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b; cin>>a>>b;
    if(a.size() > b.size()){
        cout<<"GREATER\n";
        return 0;
    }
    if(a.size() < b.size()){
        cout<<"LESS\n";
        return 0;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] < b[i]){
            cout<<"LESS\n";
            return 0;
        }else if(a[i] > b[i]){
            cout<<"GREATER\n";
            return 0;
        }
    }
    cout<<"EQUAL\n";
    return 0;
}