#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,d=0,e=0;
    for(int i=0; i< 3; i++){
        cin>>a;
        if(a==5) d++;
        if(a==7) e++;
    }

    if(d==2 && e==1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}