#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    int perfectMass=100*a, dissolvedSuggar=0;
    for(int i=0; i*a*100 <= f; i++){
        for(int j=0; j*b*100 <= f; j++){
            int water = i*a*100 + j*b*100;
            if(water>f)continue;
            for(int k=0; k*c <= e*(water/100); k++){
                for(int l=0; l*d <= e*(water/100); l++){
                    int suggar = k*c + l*d;
                    if(water+suggar > f)continue;
                    if(suggar > e*(water/100))continue;

                    if(suggar * perfectMass > dissolvedSuggar * (water+suggar) ){
                        perfectMass = water+suggar;
                        dissolvedSuggar = suggar;
                    }

                }
            }
        }
    }
    cout<<perfectMass<<" "<<dissolvedSuggar<<"\n";
    return 0;
}