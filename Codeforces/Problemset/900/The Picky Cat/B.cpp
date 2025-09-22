//Problem: https://codeforces.com/contest/2102/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
#define REP(i,a,n) for(int i=0; i<n; i++)

void solve(){
    int n; std::cin>>n;
    std::vector<int> nums(n);
    REP(i,0,n){
        std::cin>>nums[i];
        nums[i] = std::abs(nums[i]);
    }
    int prim=nums[0];
    std::sort(nums.begin(), nums.end());

    for(int i=n-1; i>=(n-(((n+1)/2)-1)); i--){
        if(nums[i] == prim){
            std::cout<<"No\n";
            return;
        }
    }
    std::cout<<"Yes\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}
