//Problem: https://codeforces.com/contest/2090/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, res=1;
	cin>>n>>m;
	vector<vector<char>> reja(n, vector<char>(m));
	vector<vector<char>> validos(n, vector<char>(m,'0'));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>reja[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(reja[i][j] == '1'){
				validos[i][j] = '1';
			}else{
				break;
			}
		}
	}
	for(int j=0; j<m; j++){
		for(int i=0; i<n; i++){
			if(reja[i][j] == '1'){
				validos[i][j] ='1';
			}else{
				break;
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){

			if(reja[i][j] != validos[i][j]){
				res=0;
			}
		}
	}

	if(res){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
