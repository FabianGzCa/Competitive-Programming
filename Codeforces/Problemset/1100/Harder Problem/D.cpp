//Problem: https://codeforces.com/contest/2044/problem/D

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cu, separados;
	cin>>n;
	vector<int> numeros(n), apariciones(n+1, 0);
	queue<int> noUsados;
	for(int i=0; i<n; i++){
		cin>>numeros[i];
		apariciones[numeros[i]] = 1;
	}
	for(int i=1; i<=n; i++){
		if(!apariciones[i]){
			noUsados.push(i);
		}
	}
	for(int i=0; i<n; i++){
		if(apariciones[numeros[i]]){
			cout<<numeros[i]<<" ";
			apariciones[numeros[i]]=0;	
		}else{
			cout<<noUsados.front()<<" ";
			noUsados.pop();
		}
	}
	cout<<"\n";

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
