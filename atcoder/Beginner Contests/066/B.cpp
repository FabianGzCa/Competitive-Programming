#include<bits/stdc++.h>
using namespace std;

bool esPar(string word, int len){
    int i=0, j=(len/2);
    for(int k=0; k<len/2; k++){
        if(word[i] != word[j]){
            return false;
        }
        i++; j++;
    }
    return true;
}

int main(){
    string word; cin>>word;
    int ultimo = word.size()-1;
    while(ultimo){
        if(ultimo&1){
            ultimo-=1;
            continue;
        }
        if(esPar(word, ultimo)){
            break;
        }
        ultimo--;
    }
    cout<<ultimo<<"\n";
    return 0;
}