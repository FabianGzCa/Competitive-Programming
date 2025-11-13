#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> res(10);
    string comtext; cin>>comtext;
    int actual=0;
    for(int i=0; i<comtext.length(); i++){
        char cu = comtext[i];
        if(cu=='0' || cu=='1'){
            res[actual] = cu;
            actual++;
        }else{
            if(actual > 0) actual--;
        }
    }
    for(int i=0; i<actual; i++)cout<<res[i];
    cout<<endl;
    return 0;
}