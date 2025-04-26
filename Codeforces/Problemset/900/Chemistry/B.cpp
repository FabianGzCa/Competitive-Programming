//Problem: https://codeforces.com/contest/1883/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k, impares=0;
	string word;
	cin>>n>>k;
	cin>>word;

	map<char, int> letters;
	for(int i=0; i<n; i++){
		letters[word[i]]++;
	}

	for (auto& cl: letters){
		if(cl.second%2){
			impares++;
		}

	}
	if(impares-k > 1) cout<<"No\n";
	else cout<<"Yes\n";

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
