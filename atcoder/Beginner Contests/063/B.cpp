#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    int letters[26]={0};
    for(char letter : word){
        letters[letter - 'a']++;
    }
    for(int letter : letters){
        if(letter >1){
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";
    return 0;
}