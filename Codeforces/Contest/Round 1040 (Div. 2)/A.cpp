#include<bits/stdc++.h>

void solve(){
    int size; std::cin>>size;
    std::vector<int> S(size);
    for(int i=0; i<size; i++) std::cin>>S[i];
    std::sort(S.begin(), S.end());
    int res=0;
    for(int cn: S){
        if(cn==0){
            res++;
        }else{
            res+=cn;
        }
    }
    std::cout<<res<<"\n";

}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}