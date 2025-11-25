#include<bits/stdc++.h>
using namespace std;

int main(){
    string word; cin>>word;
    vector<int> letters(26);
    for(auto letter : word) letters[letter-'a']++;
    for(auto letter : letters){
        if(letter == 0) continue;
        if(letter & 1){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}