#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    int n; cin>>n;
    vector<int> nums(n);
    REP(i,0,n)cin>>nums[i];
    int minv = *min_element(nums.begin(), nums.end());
    int maxv = *max_element(nums.begin(), nums.end());
    int res = INT_MAX;
    for(int i=minv; i<=maxv; i++){
        int actRes=0;
        REP(j,0,n){
            actRes += pow((nums[j]-i), 2);
        }
        res = min(res, actRes);
    }
    cout<<res<<"\n";

    return 0;
}