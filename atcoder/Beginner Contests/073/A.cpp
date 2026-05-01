#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    for(char letter : word){
        if (letter == '9'){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}