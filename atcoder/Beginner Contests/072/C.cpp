#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<int, int> nums;
    for(int i=0; i<n; i++){
        int cu; cin>>cu;
        nums[cu]++;
        nums[cu-1]++;
        nums[cu+1]++;
    }
    pair<int, int> ganador = {0,0};
    for(pair<int, int> cn : nums){
        if(cn.second > ganador.second){
            ganador = cn;
        }
    }
    cout<<ganador.second<<"\n";
    return 0;
}