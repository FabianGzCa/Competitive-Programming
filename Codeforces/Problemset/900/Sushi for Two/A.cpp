//Problem: https://codeforces.com/contest/1138/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, cu, unos=0, dos=0, actual=0, res=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		if(cu!= actual){
			res=max(res, min(unos, dos));
			if(cu==1){
				unos=0;
				actual=1;
			}else{
				dos=0;
				actual=2;
			}
		}
		if(cu==1){
			unos++;
		}else{
			dos++;
		}
	}
	res=max(res, min(unos, dos));
	cout<<res*2<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
