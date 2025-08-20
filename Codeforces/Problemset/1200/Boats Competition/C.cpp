#include<iostream>
#include<vector>

void solve(){
    int n; std::cin>>n;
    //50 peso
    std::vector<int> participants(101,0);
    for(int i=0; i<n; i++){
        int cu;
        std::cin>>cu;
        //Con ese peso hay un participante
        participants[cu]+=1;
    }
    
    int maxi = 1;

    //Checa todos los pesos
    for(int i=2; i<=100; i++){
        int maxActual=0;
        for(int j=1; j<= 50; j++){
            if(i-j <= 0) break;
            
            maxActual += std::min(participants[j], participants[i-j]);
        }
        maxi = std::max(maxi, maxActual);
    }
    std::cout<<maxi/2<<"\n";
    
}

int main(){
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}