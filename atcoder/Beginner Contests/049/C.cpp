#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string lastWord="";
    for(int i = s.length()-1 ; i >= 0; i--){
        lastWord+=s[i];
        if(lastWord == "resare"){
            lastWord = "";
        }else if( lastWord == "esare"){
            lastWord = "";
        }else if(lastWord == "remaerd"){
            lastWord = "";
        }else if(lastWord == "maerd"){
            lastWord = "";
        }
    }
    if(lastWord == ""){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}