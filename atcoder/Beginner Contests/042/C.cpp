#include<bits/stdc++.h>
using namespace std;

bool check(int num, vector<char>& bloqueados){
    string theNum = to_string(num);
    for(int i=0; i<theNum.length(); i++){
        for(int j=0; j<bloqueados.size(); j++){
            if(theNum[i] == bloqueados[j]){
                return false;
            }
        }
    }
    return true;
        
    
}


int main(){
    int n, k; cin>>n>>k;
    vector<char> bloqueados(k);
    for(int i=0; i<k; i++) cin>>bloqueados[i];
    while(!check(n, bloqueados)) n++;
    cout<<n<<"\n";
    return 0;
}