#include<bits/stdc++.h>
using namespace std;
void print(deque<int>& nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int h, w; cin>>h>>w;
    int n; cin>>n;
    vector<int> nums(n); for(int i=0;i<n; i++)cin>>nums[i];
    int act=1;
    bool ord=true;

    for(int i=0; i<h; i++){
        deque<int> desOrd;
        for(int j=0; j<w; j++){
            if(ord){
                if(j==w-1){
                    cout<<act;
                }else{
                    cout<<act<<" ";
                }
                
            }else{
                desOrd.push_front(act);
            }
            nums[act-1]--;
            if(nums[act-1] == 0)act++;
        }
        if(!ord){
            print(desOrd);
        }
        cout<<"\n";
        ord ^= 1;
    }
    return 0;
}