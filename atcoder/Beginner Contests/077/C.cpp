#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    vector<vector<long long>> pilares(3);
    vector<long long> dp;
    for(int i=0; i<3; i++){
        for(long long j=0; j<n; j++){
            long long cu; cin>>cu;
            pilares[i].push_back(cu);
        }
    }

    sort(pilares[0].begin(), pilares[0].end());
    sort(pilares[1].begin(), pilares[1].end());
    sort(pilares[2].begin(), pilares[2].end());

    for(int i=0; i<pilares[1].size(); i++){
        auto it = upper_bound(pilares[2].begin(), pilares[2].end(), pilares[1][i]);
        long long mayors = pilares[2].end() - it;
        dp.push_back(mayors);
    }

    long long suma = 0;
    for(int i=dp.size()-1 ; i >= 0; i--){
        suma+= dp[i];
        dp[i] = suma;
    }

    long long res=0;
    for(long long i=0 ;i<pilares[0].size(); i++){
        auto it = upper_bound(pilares[1].begin(), pilares[1].end(), pilares[0][i]);
        if (it != pilares[1].end()){
            int pos = it - pilares[1].begin();
            res+= dp[pos];
        }
    }

    cout<<res<<"\n";

    return 0;
}