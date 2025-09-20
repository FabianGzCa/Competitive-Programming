//Problem: https://codeforces.com/contest/2148/problem/C

#include<iostream>
#include<vector>
typedef long long ll;
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n; std::cin>>n;
    ll m; std::cin>>m;

    ll res=0;
    ll ma=0, mn;
    bool la=0, l;
    REP(i,0,n){
        std::cin>>mn>>l;

        if(l!=la){
            res += (((mn-ma-1)/2) * 2)+1;
        }else{
            res += ((mn-ma)/2) * 2;
        }
        ma=mn;
        la=l;
    }
    res+= m-mn;
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}