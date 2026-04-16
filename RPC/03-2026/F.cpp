#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, test=0; cin>>n;
    long long last=0;
    for(int i=1; i<1000000;i++){
        test+=i;
        if(n<=test){
            last = i;
            test-=i;
            break;
        }
        
    }
    if(n-test == 1){
        cout<<last<<"\n";
    }else{
        int x = n-test-1;
        int y = last;
        int mygcd = gcd(x,y);
        cout<<last<<" "<<x/mygcd<<"/"<<y/mygcd<<"\n";
    }
    return 0;
}