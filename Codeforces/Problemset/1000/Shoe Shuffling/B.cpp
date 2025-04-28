//Problem: https://codeforces.com/contest/1691/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cu;
	cin>>n;
	map<int, int> numeros;

	for(int i=0; i<n; i++){
		cin>>cu;
		numeros[cu]++;
	}
	for(auto& val: numeros){
		if(val.second < 2){
			cout<<"-1\n";
			return;
		}
	}
	int cont=1, mem=0;
	for(auto& val: numeros){
		mem=cont;
		for(int i=0; i<val.second-1; i++){
			cout<<cont+1+i<<" ";
		}
		cont += (val.second);
		cout<<mem<<" ";
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
