#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    vector<string> cads(n);
    for(int i=0; i<n; i++) cin>>cads[i];

    sort(cads.begin(), cads.end());
    for(int i=0; i<n; i++) cout<<cads[i];
    cout<<"\n";
    return 0;
}