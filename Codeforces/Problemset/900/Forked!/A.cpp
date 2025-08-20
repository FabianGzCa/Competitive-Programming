#include<iostream>
#include<set>
#include<unordered_map>

void solve(){
    int a, b;
    std::cin>>a>>b;

    int xk, yk, xq, yq;
    std::cin>>xk>>yk>>xq>>yq;

    int res=0;

    int simbolos[4] = {+1, +1, -1, -1};
    
    std::unordered_map<std::string, bool> queen;
    std::set<std::string> king;

    for(int i=0; i<4; i++){
        int si1 = simbolos[i%4];
        int si2 = simbolos[(i+1)%4];
        std::string key=std::to_string(((xk)+(a * si1)))+","+std::to_string(((yk)+(b*si2)));
        king.insert(key);
        key=std::to_string(((xk)+(b * si1)))+","+std::to_string(((yk)+(a*si2)));
        king.insert(key);

        key=std::to_string(((xq)+(a * si1)))+","+std::to_string(((yq)+(b*si2)));
        queen.insert({key, 1});
        key=std::to_string(((xq)+(b * si1)))+","+std::to_string(((yq)+(a*si2)));
        queen.insert({key, true});
    }
    for(std::string pos : king){
        if(queen[pos])res++;
    }
    std::cout<<res<<"\n";
    
}

int main(){
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}