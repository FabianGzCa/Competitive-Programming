#include<bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    vector<int> lett(26,0);
    for(char c : word){
        lett[c-'a'] +=1;
    }

    bool no=0;
    for(int cu : lett){
        if(cu&1){
            no = 1;
        }
    }
    if(no) cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}