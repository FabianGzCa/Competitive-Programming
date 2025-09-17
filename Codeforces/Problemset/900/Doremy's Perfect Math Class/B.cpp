//Problem: https://codeforces.com/contest/1764/problem/B

#include<iostream>
#include<numeric>
#include<vector>

void solve(){
    int n, myGCD; std::cin>>n;
    std::vector<int> nums(n);
    for(int i=0; i<n; i++){
        std::cin>>nums[i];
        if(i==0) myGCD = nums[i];
        myGCD = std::gcd(myGCD, nums[i]);
    }
    std::cout<<nums[n-1]/myGCD<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
}