#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d; cin>>n>>d;
    vector<int> nums(n); for(int i=0; i<n; i++) cin>>nums[i];
    int res = 2;
    for(int i=0; i<n-1; i++){
        int cu = nums[i+1] - nums[i] -1;
        cu-=(d-1)*2;
        if(cu==1)res+=1;
        if(cu>1)res+=2;
    }
    cout<<res<<"\n";
}