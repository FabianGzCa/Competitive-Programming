#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, n2; cin>>n; n2=n;
    int total =0, x;
    vector<int> nums(n);
    while(n2--){
        cin>>nums[n2];
        total+=nums[n2];
    }
    float avg = float(total) / n;
    avg = round(avg);

    total = 0;
    for(int num : nums){
        total+=pow(int(avg)-num, 2);
    }
    cout<<total<<"\n";

    return 0;
} 