#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    int a = -1, z=-1;
    int actual=0;
    for(char letter : word){
        actual++;
        if(a==-1 && letter == 'A'){
            a = actual;
        }
        if(letter=='Z'){
            z = actual;
        }
    }
    cout<<z-a+1<<"\n";
    return 0;
}