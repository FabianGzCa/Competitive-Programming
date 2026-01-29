#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    string out="";
    
    for(char letter : word){
        if(letter == '0'){
            out+='0';
        }else if (letter == '1'){
            out+='1';
        }else{
            if(out.size()!=0){
                out.erase(out.size()-1);
            }
        }
    }
    cout<<out<<"\n";
    return 0;
}