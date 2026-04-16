#include<bits/stdc++.h>
using namespace std;

int main(){
    string word; getline(cin, word);
    for(char c : word){
        if(c == ','){
            cout<<" ";
        }else{
            cout<<c;
        }
    }
    cout<<"\n";
    return 0;
}