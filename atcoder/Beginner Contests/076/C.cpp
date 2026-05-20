#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin>>s>>t;
    int idxResult=-1;
    bool esta=false;
    for(int i=0; i<s.size()-t.size()+1; i++){
        bool actual = true;
        for(int j=0; j<t.size(); j++){
            if(t[j] != s[i+j] && s[i+j] != '?'){
                actual = false;
                break;
            }
        }
        if(actual){
            esta = true;
            idxResult = i;
        }
    }
    if(esta){
        for(int i=0; i<s.size(); i++){
            if(i>= idxResult && i<idxResult+t.size()){
                cout<<t[i-idxResult];
            }else{
                if(s[i] != '?'){
                    cout<<s[i];
                }else{
                    cout<<"a";
                }
            }
        }
        cout<<"\n";
    }else{
        cout<<"UNRESTORABLE\n";
    }
    return 0;
}