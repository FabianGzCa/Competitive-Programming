#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string num;
ll res=0;

void dfs(int pos, ll actual, ll sum){
    //acabo
    if(pos == num.length()){
        res += actual + sum;
        return;
    }

    //Se acumula
    dfs(pos+1, actual*10 + (num[pos]-'0'), sum);

    //Se separa
    dfs(pos+1, num[pos]-'0' , sum+actual);

}

int main(){
    cin>>num;
    dfs(1, num[0]-'0', 0);
    cout<<res<<"\n";
    return 0;
}