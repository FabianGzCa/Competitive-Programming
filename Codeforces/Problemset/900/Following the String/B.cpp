//Problem: https://codeforces.com/contest/1927/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cu;
	string abecedario="abcdefghijklmnopqrstuvwxyz";
	map<int, string> avance;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		if(cu==0){
			cout<<(abecedario[0]);
			avance[0] += abecedario[0];
			abecedario.erase(0,1);
		}else{
			cout<<(avance[cu-1][0]);
			avance[cu] += avance[cu-1][0];
			avance[cu-1].erase(0,1);
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
