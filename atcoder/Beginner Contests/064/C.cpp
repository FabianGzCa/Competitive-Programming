#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool colors[9] = {false};
    int mymin=0, pros=0;
    for(int i=0; i<n; i++){
        int cu; cin>>cu;
        if(cu/400 >= 8){
            pros++;
            continue;
        }
        if(!colors[cu/400]){
            colors[cu/400] = true;
            mymin++;
        }
    }
    int mymax = max(mymin, mymin+pros);
    mymin = max(1, mymin);
    cout<<mymin<<" "<<mymax<<"\n";
    return 0;
}