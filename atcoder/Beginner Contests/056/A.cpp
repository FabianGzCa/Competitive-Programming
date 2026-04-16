#include<bits/stdc++.h>
using namespace std;
int main(){
    char a, b; cin>>a>>b;
    char res = 'H';
    if(a== 'H'){
        if(b=='D'){
            res = 'D';
        }
    }else{
        if(b=='H')res = 'D';
    }
    cout<<res<<"\n";
    return 0;
}