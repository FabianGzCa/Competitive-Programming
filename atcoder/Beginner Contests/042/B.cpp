#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin>>n>>l;
    vector<string> text(n);
    while(n--){
        cin>>text[n];
    }
    sort(text.begin(), text.end());
    for(string word : text){
        cout<<word;
    }
    cout<<"\n";
    return 0;
}