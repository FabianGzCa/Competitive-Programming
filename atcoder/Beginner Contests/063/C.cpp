#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> nums(n);
    int res=0, diez=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        res+=nums[i];
        if(nums[i] %10 ==0) diez+=nums[i];
    }
    if(diez == res){
        cout<<"0\n";
        return 0;
    }
    if(res % 10 != 0){
        cout<<res<<"\n";
        return 0;
    }
    sort(nums.begin(), nums.end());
    for(int num : nums){
        if(num%10 != 0){
            if(num < diez){
                res-=num;
                break;
            }else{
                res-=diez;
                break;
            }
        }
    }

    cout<<res<<"\n";


    return 0;
}