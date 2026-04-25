#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool par = (n&1) ? false : true;
    deque<int> nums;
    for(int i=0; i<n; i++){
        int cu; cin>>cu;
        if(par){
            nums.push_back(cu);
            par = par ^ 1;
        }else{
            nums.push_front(cu);
            par = par ^ 1;
        }
    }
    for(auto num : nums){
        cout<<num<<" ";
    }
    cout<<"\n";
    return 0;
}