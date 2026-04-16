#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, x; cin>>n>>x;
    vector<long long> nums(n);
    long long res=0;
    for(int i=0; i<n; i++) cin>>nums[i];
    // Primero
    if(nums[0] > x){
        res += nums[0]-x;
        nums[0] = x;
    }
    //ultimo
    if(nums[n-1] > x){
        res += nums[n-1]-x;
        nums[n-1] = x;
    }
    for(int i=0; i<n-1; i++){
        if(nums[i] + nums[i+1] > x){
            long long diff = nums[i] + nums[i+1] - x;
            res+= diff;
            nums[i+1] = nums[i+1] - diff;  
        }
    }

    cout<<res<<"\n";
    

    return 0;
}