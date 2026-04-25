#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> lights(n);
    for(int i=0; i<n; i++) cin>>lights[i];
    int cont = 0, actual=1;
    for(int i=0; i<n; i++){
        int swap = lights[actual-1];
        if(swap == 2){
            cont++;
            break;
        }
        if(swap == -1){
            cont = -1;
            break;
        }
        cont++;
        lights[actual-1] = -1;
        actual = swap;
    }
    cout<<cont<<"\n";
    return 0;
}