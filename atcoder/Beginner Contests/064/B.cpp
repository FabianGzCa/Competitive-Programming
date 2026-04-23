#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int mymin=1000, mymax=0;
    while(n--){
        int cu; cin>>cu;
        mymin = min(mymin,cu);
        mymax = max(mymax,cu);
    }
    cout<<mymax-mymin;
    return 0;
}