// Problem: https://codeforces.com/contest/1675/problem/C
#include<iostream>

void solve(){
    std::string friends;
    std::cin>>friends;
    int lf=0, ff=friends.length()-1;
    for(int i=0; i<friends.length(); i++){
        if(friends[i]=='1'){
            lf = i;
        }
        if ((i<ff) && friends[i]=='0'){
            ff = i;
        }
    }
    int res = ff-lf+1;
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while (tt--)solve();
    
    return 0;
}