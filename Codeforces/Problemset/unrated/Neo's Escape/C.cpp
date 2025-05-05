//Problem: https://codeforces.com/contest/2108/problem/C
 
#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n, total=0;
	cin>>n;
	vector<int> botones(n), revisados(n,0);
	vector<pair<int, int>> odenados(n);
	for(int i=0; i<n; i++){
		cin>>botones[i];
		odenados[i] = {botones[i], i}; 
	}
	if(n==1){
		cout<<"1\n";
		return;
	}
	sort(odenados.begin(), odenados.end(), greater<pair<int, int>>());
 
 	// primer valor, ultimo valor, valores consecutivos

 	for(pair<int, int> cadaBoton: odenados){
 		if(revisados[cadaBoton.second] == 1) continue;

 		int adyacente=0, compIguales=cadaBoton.second;
 		revisados[cadaBoton.second]=1;

 		if(cadaBoton.second < n-1 && revisados[cadaBoton.second+1] == 1){
 			adyacente=1;
 		}

 		while(compIguales>0){
 			compIguales--;
 			if(botones[compIguales] ==  cadaBoton.first){
 				revisados[compIguales] = 1;
 			}else{
 				if(revisados[compIguales] == 1){
 					adyacente=1;
 				} 
 				break;
 			}
 		}

 		if(!adyacente){
 			total++;
 		}
 	}
	


	cout<<total<<"\n";
}
 
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}