//Problem: https://codeforces.com/problemset/problem/136/A

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cu;
	cin>>n;
	vector<int> amigos(n);
	for(int i=0; i<n; i++){
		cin>>cu;
		amigos[cu-1] = i+1;
	}
	for(int i=0; i<n; i++){
		cout<<amigos[i]<<" ";
	}
	cout<<"\n";
	
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
