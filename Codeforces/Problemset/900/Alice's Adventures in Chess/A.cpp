//Problem: https://codeforces.com/contest/2028/problem/A
#include<iostream>
typedef long long ll;
#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n, x=0, y=0, xQ, yQ;
    std::cin>>n>>xQ>>yQ;
    std::string movs;std::cin>>movs;
    for(int i=0; i<20; i++){
        for(char letter : movs){
            switch (letter){
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
            }
            if(x == xQ && y==yQ){
                std::cout<<"Yes\n";
                return;
            }
        }
    }
    std::cout<<"No\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}