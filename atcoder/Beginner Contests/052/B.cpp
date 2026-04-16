#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a=0, actual=0, res=0; cin>>a;
    string word;
    cin>>word;
    for(char letter : word){
        if(letter == 'I'){
            actual++;
        }else{
            actual--;
        }
        res = max(res,actual);
    }
    cout<<res<<"\n";
    return 0;
}