#include<bits/stdc++.h>
using namespace std;

long long diff(long long a, long long b, long long c){
    return max({a,b,c}) - min({a,b,c});
}

long long cut_chocolate_bar(long long h, long long w){
    long long ans = (1LL<<62);

    long long a,b,c;
    for(long long h1 : {h/3, (h+2)/3} ){
        if(h1<=0 || h1>=h)continue;
        a = h1*w;
        long long h2 = h-h1;

        {
            b = h2/2 * w;
            c = (h2-(h2/2)) * w;
            ans = min(ans, diff(a,b,c)); 
        }
        {
            b = w/2 * h2;
            c = (w - (w/2)) * h2;
            ans = min(ans, diff(a,b,c));
        }
    }
    return ans;
}

int main(){
    int h, w; cin>>h>>w;
    if(h%3 == 0 || w%3 == 0){
        cout<<"0\n";
        return 0;
    }
    long long ans = (1LL<<62);
    ans = min(ans, cut_chocolate_bar(h,w));
    ans = min(ans, cut_chocolate_bar(w,h));
    cout<<ans<<"\n";
    return 0;
}