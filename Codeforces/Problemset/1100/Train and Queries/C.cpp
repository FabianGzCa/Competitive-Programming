//Problem: https://codeforces.com/contest/1702/problem/C
#include<iostream>
#include<utility>
#include<set>

void solve(){
    int stationsAmmount, queries;
    std::cin>>stationsAmmount>>queries;
    std::set<std::pair<int, std::pair<int, int>>> stations;

    for(int eachStation=1; eachStation<=stationsAmmount; eachStation++){
        int value; std::cin>>value;
        auto search = stations.lower_bound({value, {0, 0}});
        if(search != stations.end() && (*search).first == value){
            auto searchChanged = *search;
            stations.erase(search);
            searchChanged.second.second = eachStation;
            stations.insert(searchChanged);
        }else{
            std::pair<int, std::pair<int, int>> newStation = {value, {eachStation, eachStation}};
            stations.insert(newStation);
        }
    }
    for(int eachTest=0; eachTest<queries; eachTest++){
        int a, b; std::cin>>a>>b;
        auto searchA = stations.lower_bound({a,{0,0}});
        auto searchB = stations.lower_bound({b,{0,0}});
        if ((*searchA).first != a || (*searchB).first != b){
            std::cout<<"No\n";
            continue;
        }
        if((*searchA).second.first <= (*searchB).second.second) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}