// Problem: https://codeforces.com/contest/1820/problem/B

#include<iostream>
#include<vector>
void solve(){
    std::string number;
    std::cin>>number;


    int maxNum=0, actual=0, beg=0, end=0;
    bool zero = false;
    for(int eachLetter=0; eachLetter < number.length(); eachLetter++){
        if(number[eachLetter] == '0'){
            maxNum = std::max(actual,maxNum);
           
            actual=0;
            end=0;

            zero = true;
            continue;
        }
        actual++;
        if(!zero){
            beg++;
        }else{
            end++;
        }
    }

    maxNum = std::max(maxNum, actual);
    maxNum = std::max(maxNum, beg+end);
    if(zero == false){
        std::cout<<((long long)maxNum) * maxNum<<"\n";
        return;
    }

    long long res=0;
    maxNum++;
    res = ((maxNum)&1)?(((long long)maxNum)/2)*((maxNum/2)+1):((long long)maxNum)/2*(maxNum/2);
    /*for(long long i=1; i<=(maxNum/2)+1; i++){
        res = std::max(res, (maxNum-i+1)*i);
    }*/
    std::cout<<res<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}

