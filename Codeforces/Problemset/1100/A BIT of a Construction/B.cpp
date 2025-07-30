// Problem: https://codeforces.com/contest/1957/problem/B
#include<iostream>

void solve(){
    int ammount, sum;
    std::cin>>ammount>>sum;
    if(ammount==1){
        std::cout<<sum<<"\n";
        return;
    }
    int max=1;
    while(sum>max){
        max*=2;
    }

    if(sum == max-1 || sum==1){
        std::cout<<sum<<" ";
        for(int i=0; i<ammount-1; i++){
            std::cout<<"0 ";
        }
        std::cout<<"\n";
        return;
    }

    max/=2;
    std::cout<<max-1<<" "<<sum-(max-1)<<" ";
    for(int i=0; i<ammount-2; i++){
        std::cout<<"0 ";
    }
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
}
