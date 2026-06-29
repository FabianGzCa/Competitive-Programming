#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    cin>>nums[0];
    int pas=nums[0];
    bool past=false;
    for(int i=1; i<n; i++){
        cin>>nums[i];
        if(nums[i] != pas){
            past=true;
        }
    }
    if(!past){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=n-1; i>=0; i--){
        if(i==n-1-1){
            cout<<nums[0]<<" ";
        }else if(i==0){
            cout<<nums[n-1-1]<<" ";
        }else{
            cout<<nums[i]<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt; cin>>tt;
    while(tt--)solve();
    return 0;
}