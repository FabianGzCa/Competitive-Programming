//Problem: https://codeforces.com/contest/1850/problem/D

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k, res=0, actualRes=0;
	cin>>n>>k;
	vector<int> numeros(n);
	for(int i=0; i<n; i++)cin>>numeros[i];
	sort(numeros.begin(), numeros.end());

	for(int i=0; i<n-1; i++){
		if(numeros[i+1]-numeros[i] <= k)actualRes++;
		else actualRes=0;
		if(actualRes>res)res=actualRes;
	}
	cout<<n-res-1<<"\n";


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
