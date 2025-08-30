#include<bits/stdc++.h>

void solve(){
    int n, s; std::cin>>n>>s;
    std::vector<int> a(n);
    int suma=0, cero=0, uno=0, dos=0;
    for(int i=0; i<n; i++){
        std::cin>>a[i];
        suma+=a[i];
        if(a[i]==0)cero++;
        if(a[i]==1)uno++;
        if(a[i]==2)dos++;
    }
    s = s%suma;
    
    //Cuando la suma da s
    if(s==0 && suma>0){
        std::cout<<"-1";
        return;
    }
    //Cuando n = 0
    if(n==0 && suma==0){
        std::cout<<"-1";
        return;
    }
    //No hay unos
    if(uno==0 && s%2==0){
        std::cout<<"-1";
        return;
    }
    //No hay doses
    if(dos==0 && uno>=1){
        std::cout<<"-1";
        return;
    }
    
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}
2 2 - 2