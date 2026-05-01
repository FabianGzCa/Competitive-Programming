#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    for(int i=1; i<=word.size(); i++){
        if(i&1){
            cout<<word[i-1];
        }
    }
    cout<<"\n";
    return 0;
}