#include<iostream>
using namespace std;
int main(){
    string word; cin>>word;
    int rocks=0, res=0;
    for(char letter : word){
        if(letter == 'g' && rocks == 0){
            rocks++;
            continue;
        }
        if(letter == 'g'){
            rocks--;
            res+=1;
        }
        if(letter == 'p'){
            if(rocks>0){
                rocks--;
            }else{
                rocks++;
                res--;
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}