//Problem: https://codeforces.com/contest/1796/problem/A

#include<iostream>
#include<string>
using namespace std;

void solve(){
	int tam;
	string dada,repetida = "FBFFBFFBFBFFBFFBFBFFBFFB";
	cin>>tam;
	cin>>dada;
	
	for(int k=0; k<11; k++){
		for(int i=0; i<tam; i++){
			if(dada[i] == repetida[k+i]){
				if(i==tam-1){
					cout<<"YES\n";
					return;
				}
			}else{
				break;
			}
		}
	}
	cout<<"NO\n";

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
