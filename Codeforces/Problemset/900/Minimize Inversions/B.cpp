//problem: https://codeforces.com/contest/1918/problem/B

#include<iostream>
#include<algorithm>
#include<vector>

typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<std::pair<int, int>> vp;

#define F first
#define S second
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    vp first(n);
    vi second(n);
    REP(i,0,n){
        std::cin>>first[i].F;
        first[i].S=i;
    }
    REP(i,0,n)std::cin>>second[i];
    std::sort(first.begin(), first.end());

    REP(i,0,n)std::cout<<first[i].F<<" ";
    std::cout<<"\n";
    REP(i,0,n)std::cout<<second[first[i].S]<<" ";
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}