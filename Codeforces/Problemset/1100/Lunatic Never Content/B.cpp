//Problem: https://codeforces.com/contest/1826/problem/B

#include<iostream>
#include<vector>
#include<numeric>

void solve(){
    int tam; std::cin>>tam;
    std::vector<int> nums(tam);
    for(int i=0; i<tam; i++)std::cin>>nums[i];
    
    int res=0;

    for(int i=0; i< (tam+1)/2; i++){
        res = std::gcd(res, std::abs(nums[i]-nums[tam-i-1]));
    }

    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}