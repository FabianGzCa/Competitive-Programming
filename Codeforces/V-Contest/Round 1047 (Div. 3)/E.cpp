//Unsolved

#include<bits/stdc++.h>
typedef long long ll;
typedef std::vector<int> vi;

#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n;
    ll k;
    std::cin>>n>>k;
    vi nums(n);
    REP(i,0,n) std::cin>>nums[i];
    std::sort(nums.begin(),nums.end());
    int minAusente=999999;
    int anterior=-1;
    REP(i,0,200001){
       if(nums[i] != anterior+1 && nums[i] != anterior){
            minAusente = anterior+1;
            break;
       }
       anterior = nums[i];
    }
    REP(i,0,n){

    }
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
