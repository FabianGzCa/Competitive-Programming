//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> permutacion(n), permOrdenada;
	for(int i=0; i<n; i++){
		cin>>permutacion[i];
	}
	permOrdenada = permutacion;
	sort(permOrdenada.begin(), permOrdenada.end());

	if(n==1){
		cout<<"-1\n";
		return;
	}

	for(int i=0; i<n-2; i++){
		int piv=0;
		if(permOrdenada[0] == permutacion[i]){
			piv=1;
		}
		cout<<permOrdenada[0+piv]<<" ";
		permOrdenada.erase(permOrdenada.begin()+piv);
	}

	if(permOrdenada[0] == permutacion[n-2] || permutacion[n-1] == permOrdenada[1]){
		cout<<permOrdenada[1]<<" "<<permOrdenada[0]<<" \n";
	}else{
		cout<<permOrdenada[0]<<" "<<permOrdenada[1]<<" \n";
	}

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
