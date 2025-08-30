//problem: https://codeforces.com/contest/1894/problem/B

#include<iostream>
#include<vector> 

void solve(){
    int n;
    std::cin>>n;
    std::vector<int> numbers(n), coinc(101), res(n,1);

    for(int i=0; i<n; i++){
        std::cin>>numbers[i];
        coinc[numbers[i]]++;
    }
    int pares=0;
    int primero=0, segundo=0;
    for(int i=1; i<101; i++){
        if(coinc[i]>1){
            coinc[i]=2;
            if(primero){
                segundo = i;
            }else{
                primero = i;
            }
            pares++;
        }
    }
    if(pares<2){
        std::cout<<"-1\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(numbers[i] == primero){
            primero=0;
            res[i] = 2;
        }
        if(numbers[i] == segundo){
            segundo=0;
            res[i] = 3;
        }
    }

    for(int i=0; i<n; i++){
        std::cout<<res[i]<<" ";
    }
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}