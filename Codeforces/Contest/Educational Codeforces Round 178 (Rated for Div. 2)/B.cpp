//Problem: https://codeforces.com/contest/2104/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cn;
	long long res=0;
	cin>>n;
	vector<int> numeros;
	map<int, int> numerosOrdenados;

	for(int i=0; i<n; i++){
		cin>>cn;
		numeros.push_back(cn);
		numerosOrdenados[cn]++;
	}

	for(int i=0; i<n; i++){
		
		if(i>0){
			res+= numeros[n-i];
			numerosOrdenados[numeros[n-i]]--;
			if(numerosOrdenados[numeros[n-i]] == 0){
				numerosOrdenados.erase(numeros[n-i]);
			}

		}
		auto ultimo = numerosOrdenados.rbegin();

		cout<< res+(*ultimo).first<<" ";


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
