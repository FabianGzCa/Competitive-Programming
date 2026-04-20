#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int row, col; cin>>row>>col;
    cout<<"##";
    for(int i=0; i<col; i++)cout<<"#";
    cout<<"\n";

    for(int i=0; i< row; i++){

        cout<<"#";
        string word; cin>>word;
        cout<<word<<"#\n";
        
    }
    cout<<"##";
    for(int i=0; i<col; i++)cout<<"#";
    cout<<"\n";

    return 0;
}