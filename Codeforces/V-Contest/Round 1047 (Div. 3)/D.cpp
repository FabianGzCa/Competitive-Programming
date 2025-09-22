#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n; std::cin>>n;
    int input[n], nums[200001]={}, espejo[200001]={};
    REP(i,0,n){
        std::cin>>input[i];
        nums[input[i]]++;
    }
    
    int cont=1;
    REP(i,0,200001){
        if(nums[i]==0)continue;
        if(nums[i]%i != 0){
            std::cout<<"-1\n";
            return;
        }

        espejo[i] = cont;
        cont+= nums[i]/i;
    }

    REP(i,0,n){
        std::cout<<espejo[input[i]]<<" ";
        nums[input[i]]--;
        if(nums[input[i]]%input[i] == 0){
            espejo[input[i]]++;
        }
    }
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
