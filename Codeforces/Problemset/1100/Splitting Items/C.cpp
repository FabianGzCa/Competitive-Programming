#include<iostream>
#include<set>

void solve(){
    std::multiset<int, std::greater<int>> items;
    int n, k;
    std::cin>>n>>k;
    for(int ci=0; ci<n; ci++){
        int cu;
        std::cin>>cu;
        items.insert(cu);
    }
    long long total=0;
    for(int cp=0; cp<n/2; cp++){
        long long grande, chico;
        grande = *items.begin();
        items.erase(items.begin());
        chico = *items.begin();
        items.erase(items.begin());

        if(chico+k >= grande){
            k-=grande-chico;
            continue;
        }
        total+= grande - (chico+k);
        k=0;
        
        
    }
    if(n&1){
        total+=*items.begin();
    }
    std::cout<<total<<std::endl;
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}
