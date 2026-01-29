#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l; cin>>n>>l;
    vector<string> words(n);
    for(int i=0; i<n; i++)cin>>words[i];
    sort(words.begin(), words.end());
    for(int i=0; i<n; i++)cout<<words[i];
    cout<<"\n";
    return 0;
}