#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> nums(n);
    vector<long long> izq(n);
    vector<long long> der(n);
    long long total=0;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        total += (long long) nums[i];
        izq[i] = total;
    }
    long long otroTotal=0;
    for(int i=n-1; i>=0; i--){
        otroTotal+= (long long) nums[i];
        der[i] = otroTotal;
    }

    long long minDiff=LONG_MAX;
    for(int i=0; i<n-1; i++){
        minDiff = min(minDiff, abs(der[i+1] - izq[i]));
    }
    cout<<minDiff<<"\n";

    return 0;
}