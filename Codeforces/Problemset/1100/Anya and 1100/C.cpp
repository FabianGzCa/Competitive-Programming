//Problem: https://codeforces.com/contest/2036/problem/C
#include<iostream>
#include<vector>

int ammSubs(int posX,int posY, std::string& s){
    if(posX<0)posX=0;
    if(posY> s.length()-1) posY = s.length()-1;
    int unos=0, ceros=0, res=0;
    for(int i=posX; i<=posY; i++){
        if(s[i] == '0'){
            ceros++;
            if(unos < 2){
                unos=0, ceros=0;
            }
            if( unos==2 && ceros == 2){
                unos=0, ceros=0;
                res++;
            }
        }else{
            if(ceros>0){
                ceros=0;
                unos=0;
            }
            if(unos<2) unos++;
        }
    }
    return res;
}

void solve(){
    std::string s; std::cin>>s;
    int tt; std::cin>>tt;
    int tam = s.length();
    int substr= ammSubs(0,(tam-1),s);
    while(tt--){
        int pos;
        char type;
        int actual=0, nueva=0;
        std::cin>>pos>>type;
        pos-=1;
        actual = ammSubs(pos-3, pos+3, s);
        s[pos] = type;
        nueva = ammSubs(pos-3, pos+3, s);
        substr += nueva-actual;
        if(substr>0)std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}