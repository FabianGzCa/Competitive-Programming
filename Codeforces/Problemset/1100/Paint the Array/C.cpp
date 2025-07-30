// Problem: https://codeforces.com/contest/1618/problem/C

#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>

void solve(){
    int size; std::cin>>size;
    std::vector<long long> numbers(size);
    for(int i=0; i<size; i++) std::cin>>numbers[i];

    std::vector<long long> gcd(2);
    for(int i=0; i<2; i++) gcd[i] = numbers[i];

    for(int cn=0; cn<size; cn++){
        gcd[cn%2] = std::gcd(gcd[cn%2], numbers[cn]);
    }

    std::vector<bool> valid(2, true);
    for(int cn=0; cn<size; cn++){
        if(valid[cn%2] && numbers[cn]%gcd[(cn%2)^1]==0) valid[cn%2]=false;
    }
    long long res=0;
    for(int i=0; i<2; i++){
        if(valid[i]) res=std::max(res,gcd[i^1]);
    }
    if(res==1)res=0;
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}