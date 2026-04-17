#include<bits/stdc++.h>
using namespace std;
string compare(string c1, string c2){
    string res="";
    for(char cl1 : c1){
        for(int i=0; i<c2.size(); i++){
            if(cl1 == c2[i]){
                res+=cl1;
                c2.erase(i, 1);
                break;
            }
            else if(c2[i] > cl1){
                break;
            }
        }
    }
    return res;
}

int main(){
    int n; cin>>n;
    string c1; cin>>c1;
    sort(c1.begin(), c1.end());
    string res = c1;
    for(int i=0; i<n-1; i++){
        string newCompar; cin>>newCompar;
        sort(newCompar.begin(), newCompar.end());
        res = compare(res, newCompar);
    }
    cout<<res<<"\n";
    return 0;
}