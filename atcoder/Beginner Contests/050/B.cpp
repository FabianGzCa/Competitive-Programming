#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> times(n);
    int res =0;
    for(int i=0; i<n; i++){
        cin>>times[i];
        res+=times[i];
    }
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        cout<< (res- times[a-1] + b)<<"\n";
    }
    return 0;
}