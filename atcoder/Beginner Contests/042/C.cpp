#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K; cin>>N>>K;
    vector<char> digits(K);
    while(K--) cin>>digits[K];

    while(1){
        bool broken = 0;
        string num = to_string(N);
        for(char letter : num){
            for(char digit : digits){
                if(letter == digit && !broken){
                    N+=1;
                    broken=1;
                }
            }
        }
        if(broken) continue;
        break;
    }
    cout<<N<<"\n";
    return 0;
}