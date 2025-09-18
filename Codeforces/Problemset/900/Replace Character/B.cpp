//Problem: https://codeforces.com/contest/2047/problem/B

#include<iostream>
#include<climits>

#define REP(i,a,n) for(int i=a; i<n; i++)

void solve(){
    int n;
    std::string word;
    std::cin>>n>>word;

    int letters[26]={};
    char maxC=word[0], minC='0';
    int maxPas=1, minPas=999999;
    REP(i,0,n){
        letters[word[i]-97]++;
        if(letters[word[i]-97]>1 && letters[word[i]-97] > maxPas){
            maxC=word[i];
            maxPas = letters[word[i]-97];
        }
    }
    
    REP(i,0,26){
        if(letters[i] == 1 && i+97 !=maxC){
            minC=(i+97);
        }
    }
    //abbcccaaa
    if(minC == maxC){
        REP(i, 0, 26){
            if(letters[i]>0 && ((char)i+97) != maxC){
                minC=i+97;
                break;
            }
        }
    }
    if(minC='0'){
        REP(i, 0, 26){
            if(letters[i] !=0 && letters[i] < minPas && ((char)i+97) != maxC){
                minPas=letters[i];
                minC=i+97;
            }
        }
    }
    REP(i,0,n){
        if(maxC != 0 && word[i] == minC){
            std::cout<<maxC;
            maxC=0;
        }else{
            std::cout<<word[i];
        }
    }
    std::cout<<"\n";
}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--)solve();
    return 0;
}