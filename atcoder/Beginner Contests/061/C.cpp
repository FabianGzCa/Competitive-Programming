#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    map<long long, long long> nums; 
    for(int i=0; i<n; i++){
        long long a,b; cin>>a>>b;
        nums[a] += b;
    }
    for(auto num : nums){
        k-=num.second;
        if (k<=0){
            cout<<num.first<<"\n";
            return 0;
        }
    }
    return 0;
}