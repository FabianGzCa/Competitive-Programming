// Problem: https://codeforces.com/contest/1788/problem/B

#include<iostream>
#include<string>

void solve(){
    int number, mr, ml;
    std::cin>>number;
    if(number&1){
        std::string number_text = std::to_string(number);
        std::string mr_text, ml_text;
        bool change = true;
        for(char cn : number_text){
            cn-='0';
            int cni = (int) cn;
            if(!(cni&1)){
                cni /= 2;
                cni+='0';
                mr_text+=(char)cni;
                ml_text+=(char)cni;
                continue;
            }

            if(change){
                change=false;
                cni/=2;
                cni+='0';
                mr_text+=(char)cni+1;
                ml_text+=(char)cni;
            }else{
                change=true;
                cni/=2;
                cni+='0';
                mr_text+=(char)cni;
                ml_text+=(char)cni+1;
            }
        }
        ml = std::stoi(ml_text);
        mr = std::stoi(mr_text);
    }else{mr = number/2;
        ml = number/2;
        mr = number/2;
        ml = number/2;
    }
    std::cout<<ml<<" "<<mr<<"\n";
}

int main(){
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}