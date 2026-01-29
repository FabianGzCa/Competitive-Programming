#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, excNms; cin>> num>>excNms;
    vector<char> exc(excNms);
    for(int i=0; i<excNms; i++)cin>>exc[i];
    bool res=0;
    while (1){
        string numS = to_string(num);
        res = 1;
        for(char cn : numS){
            for(char cn2 : exc){
                if (cn == cn2){
                    res = 0;
                }
            }
        }
        if(res){
            cout<<num<<"\n";
            return 0;
        }else{
            num++;
        }
    }
    return 0;
}