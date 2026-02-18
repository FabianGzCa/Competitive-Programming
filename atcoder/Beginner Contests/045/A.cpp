#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, H;
    cin>>A>>B>>H;
    int res=0;
    A = A*H;
    B = B*H;
    res = ((max(A,B) - min(A,B)) / 2) + min(A,B);
    cout<<res<<"\n";
    return 0;
}