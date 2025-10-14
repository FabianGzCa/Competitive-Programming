#include<iostream>
#include<vector>
#include<algorithm>

typedef std::vector<int> vi;
#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int n; std::cin>>n;
    vi input(n);
    vi sorted;
    REP(i,0,n)std::cin>>input[i];

    REP(i,0,n){
        int number = input[i];
        auto a = std::lower_bound(sorted.begin(), sorted.end(), number);
        int pos = a-sorted.begin();
        if(pos == sorted.size() || sorted.size() == 0)sorted.push_back(number);
        else sorted[pos] = number;
    }
    std::cout<<sorted.size()<<"\n";
    return 0;
}