#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    vector<string> a(n), b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==b[0][0]){
                if(i+m > n || j+m > n){
                    continue;
                }
                int coincidencias = 0;
                for(int k=i; k<i+m; k++){
                    for(int l=j; l<j+m; l++){
                        if(a[k][l]!=b[k-i][l-j]){
                            coincidencias = -1;
                            break;
                        }
                        coincidencias++;
                    }
                    if(coincidencias == -1){
                        break;
                    }
                }
                if(coincidencias == m*m){
                    cout<<"Yes\n";
                    return 0;
                }
            }
        }
    }
    cout<<"No\n";
    return 0;
}