#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    vector<long long> nums(n);
    for(long long i=0; i<n; i++) cin>>nums[i];
    sort(nums.begin(), nums.end(), greater<long long>());
    long long pasado = -5;
    long long usos = 0;
    long long area = 1;    
    for(long long cn : nums){
        if(pasado == cn){
            usos ++;
            area*=cn;
            pasado=-1;
        }else{
            pasado = cn;
        }
        if(usos == 2){
            cout<<area<<"\n";
            return 0;
        }
    }
    cout<<"0\n";
    return 0;
}