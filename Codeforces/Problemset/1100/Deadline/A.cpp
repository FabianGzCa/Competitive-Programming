// https://codeforces.com/contest/1288/problem/A
#include<iostream>
#include<limits.h>
#include<cmath>

void solve(){
    int deadline_days, run_days;
    std::cin>>deadline_days>>run_days;
    if(run_days <= deadline_days){
        std::cout<<"Yes\n";
        return;
    }

    int minDays=INT_MAX, calculateDays, totalDays;

    for(int opt=1; opt<=deadline_days; opt++){
        calculateDays = ceil((float)run_days / (opt+1));
        totalDays = opt + calculateDays;
        if(totalDays > minDays) break;
        minDays = totalDays;
    }
    if(minDays <= deadline_days) std::cout<<"Yes\n";
    else std::cout<<"No\n";

}

int main(){
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}