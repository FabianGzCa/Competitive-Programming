//Problem: https://codeforces.com/contest/1749/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
	ll res=0;
	int n;
	cin>>n;
	vector<int> life(n), power(n);
	for(int i=0; i<n; i++) cin>>life[i];
	for(int i=0; i<n; i++) cin>>power[i];

	int i=0,j=n-1;
	while (i!=j){
		if(power[i] < power[j]){
			res+= (ll) life[i];
			res+= (ll) power[i];
			i++;
		}else{
			res+= (ll) life[j];
			res+= (ll) power[j];
			j--;
		}
	}
	res+= (ll) life[i];
	cout<<res<<"\n";


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
