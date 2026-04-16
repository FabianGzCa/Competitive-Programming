#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h, n; cin>>w>>h>>n;
    int xmin=0, xmax=w, ymin=0, ymax=h;
    while(n--){
        int x, y, n; cin>>x>>y>>n;
        if(n==1) xmin= max(xmin, x);
        if(n==2) xmax= min(xmax, x);
        if(n==3) ymin= max(ymin, y);
        if(n==4) ymax= min(ymax, y);
    }
    w = max(xmax - xmin, 0);
    h = max(ymax - ymin, 0);
    cout<<w*h<<"\n";
    return 0;
}