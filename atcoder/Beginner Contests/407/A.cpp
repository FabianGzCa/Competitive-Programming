#include<bits/stdc++.h>

void solve(){
    int AA, BB; std::cin>>AA>>BB;
    float A=AA, B=BB, res; 
    res=A/B;
    int res2 = A/B;
    if(res<=res2+0.5) std::cout<<res2<<"\n";
    else std::cout<<res2+1<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt=1;
    while(tt--) solve();
    return 0;
}