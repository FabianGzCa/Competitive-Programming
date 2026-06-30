#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin>>n;
    vector<long long> nums(3,0);
    long long cnt=0;
    while(nums[0] < n){
        cnt++;
        nums[0] = (nums[1] == 0) ? 1 : nums[1]*2+1;
        sort(nums.begin(), nums.end());
    }
    cout<<cnt<<"\n";

}
int main(){
    int tt; cin>>tt;
    while(tt--)solve();
    return 0;
}