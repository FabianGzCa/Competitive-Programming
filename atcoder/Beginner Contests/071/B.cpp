#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    bool letters[26] = {false};
    for(char letter : word){
         letters[letter-'a'] = true;
    }

    for(int i=0; i<26; i++){
        if(!letters[i]){
            cout<<(char) (i+'a')<<"\n";
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}