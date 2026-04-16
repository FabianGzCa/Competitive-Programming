#include<bits/stdc++.h>
using namespace std;
int main(){
    string board; cin>>board;
    int diferencia=0;
    char anterior = board[0];
    for(char piece : board){
        if(piece != anterior){
            diferencia++;
            anterior = piece;
        }
    }
    cout<<diferencia<<"\n";
}