#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> nums(n);
    long long cu; cin>>cu;
    long long mymin = cu;
    for(int i=0; i<n-1; i++){
        mymin = lcm(mymin, cu);
        cin>>cu;
    }
    mymin = lcm(mymin, cu);
    cout<<mymin<<"\n";
    return 0;
}