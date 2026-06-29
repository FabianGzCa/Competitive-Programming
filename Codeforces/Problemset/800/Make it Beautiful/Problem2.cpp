#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    if(nums[0] == nums[n-1]){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n"<<nums[n-1]<<" ";
    for(int i=0; i<n-1; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n; cin>>n;
    while(n--)solve();
    return 0;
}