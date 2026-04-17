#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    long long pos=0, neg=0;
    long long resPos=0, resNeg=0;
    bool change = true;
    for(int i=0; i<n; i++){
        long long in; cin>>in;
        pos += in;
        neg += in;
        if(change){
            if( pos <= 0){
                resPos += abs(pos) +1;
                pos += abs(pos) +1;
            }
            if (neg >= 0){
                resNeg += neg +1;
                neg -= neg+1;
            }
            change = false;
        }else{
            if( pos >= 0){
                resPos += pos+1;
                pos -= pos + 1;
            }
            change = true;
            if (neg <= 0){
                resNeg += abs(neg) +1;
                neg += abs(neg)+1;
            }
        }
    }
    cout<<min(resPos, resNeg)<<"\n";
    return 0;
}