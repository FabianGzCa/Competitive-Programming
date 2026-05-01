#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<long long> nums;
    while(n--){
        int cu; cin>>cu;
        if(nums.count(cu)){
            nums.erase(cu);
        }else{
            nums.insert(cu);
        }
    }
    cout<<nums.size()<<"\n";
    return 0;
}