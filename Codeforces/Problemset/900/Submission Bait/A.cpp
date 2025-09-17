//Problem: https://codeforces.com/contest/1990/problem/A

#include<iostream>
#include<algorithm>
typedef long long ll;

#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    int nums[n+1] = {};
    REP(i,0,n){
        int cu; std::cin>>cu;
        nums[cu]++;
    }
    REP(i,0,n+1){
        if(nums[i]&1){
            std::cout<<"YES\n";
            return;
        }
    }
    std::cout<<"NO\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}