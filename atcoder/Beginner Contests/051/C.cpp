#include<bits/stdc++.h>
using namespace std;
void myFormat(int ammount, char letter){
    while(ammount--){
        cout<<letter;
    }
}

int main(){
    int sx,sy,tx,ty;cin>>sx>>sy>>tx>>ty;
    int u1,r1,d1,l1,u2,r2,d2,r3,d3,l2,u3;
    u1 = ty-sy;
    r1 = tx-sx;
    d1 = u1;
    l1 = r1+1;
    u2 = u1+1;
    r2 = r1+1;
    d2 = 1;
    r3 = 1;
    d3 = d1+1;
    l2 = l1;
    u3 = 1;
    myFormat(u1, 'U');
    myFormat(r1, 'R');
    myFormat(d1, 'D');
    myFormat(l1, 'L');
    myFormat(u2, 'U');
    myFormat(r2, 'R');
    myFormat(d2, 'D');
    myFormat(r3, 'R');
    myFormat(d3, 'D');
    myFormat(l2, 'L');
    myFormat(u3, 'U');
    cout<<"\n";
    return 0;
}
