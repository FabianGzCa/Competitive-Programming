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
 
	for(int i=0; i<n; i++){
		int actualIndex = odenados[i].second;
		if(actualIndex==0){
			if(revisados[actualIndex+1] == 1) revisados[0] = 1;
			else total++;
 
			revisados[0]=1;
 
		}else if(actualIndex==n-1){
			if(revisados[actualIndex-1] == 1);
			else total++;
 
			revisados[n-1]=1;
 
		}else{
			if(max(revisados[actualIndex-1], revisados[actualIndex+1]) == 0) total++;
			revisados[actualIndex] = 1;
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