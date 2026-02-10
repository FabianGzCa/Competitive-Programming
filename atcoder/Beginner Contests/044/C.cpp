#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A; cin>>N>>A;
    vector<int> cards(N);
    int N2 = N;
    while(N2--) cin>>cards[N2];
    
    int total=0, cavg=0;
    N2 = N;
    vector<int> avgCards(N);
    while(N2--){
        avgCards[N2] = cards[N2] - int(A);
    }
    vector<vector<long long>> dp(5001, vector<long long>(N+1, 0));
    dp[2500][0] = 1ll;

    int card = 0;
    for(long long num : avgCards){
        card++;
        for(int i=50; i<4951; i++){
            if(dp[i][card-1] == 0) continue;
            dp[i][card] += dp[i][card-1];
            dp[num+i][card] += dp[i][card-1];
        }
    }

    cout<<dp[2500][N]-1<<"\n";
    return 0;
}