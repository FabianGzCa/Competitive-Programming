//Problem: https://codeforces.com/contest/1857/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	stack<char> solucion;

	int posCambio=9999999;
	string numero;
	cin>>numero;
	int n=numero.size();
	for(int i=0; i<n; i++){
		if(numero[i] >= '5'){
			posCambio=i;
			//cout<<i<<" ";
			break;
		}
	}
	for(int i=posCambio+1; i<n; i++){
		solucion.push('0');
	}

	if(posCambio==9999999) posCambio=n-1;
	for(int i=posCambio; i>=0; i--){
		if(i>0 && numero[i]>='5' && numero[i-1]=='4'){
			numero[i-1]='5';
			solucion.push('0');
		}else if(i>0 && numero[i]>='5'){
			numero[i-1]+=1;
			solucion.push('0');
		}else if(i==0 && numero[i]>='5'){
			solucion.push('0');
			solucion.push('1');
		}else{
			solucion.push(numero[i]);
		}
	}
	while(!solucion.empty()){
		cout<<solucion.top();
		solucion.pop();
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
