#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1\n";
        return 0;
    }
    long long r=1;
    vector<int> res(n,0);
    bool valid=true;
    for(int i=0; i<n; i++){
        long long cn;
        cin>>cn;
        if(!valid || cn >= n){
            valid = false;
            continue;
        }
        res[cn]++; 
    }
    if(n&1){
        if(res[0] != 1){
            cout<<"0\n";
            return 0;
        }
        for(int i=2; i<n; i+=2){
            if(res[i] != 2){
                cout<<"0\n";
                return 0;
            }
        }
        n-=1;
    }else{
        for(int i=1; i<n; i+=2){
            if(res[i] != 2){
                cout<<"0\n";
                return 0;
            }
        }
    }
    
    n/=2;
    n-=1;
    if(n>0){
        r=2;
    }
    while(n--){
        r *= 2;
        r = r % 1000000007ll;
    }
    cout<<r<<"\n";

    return 0;
}