//Problem: https://codeforces.com/contest/1738/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	string s,t;
	cin>>s;
	cin>>t;
	if(s.length() != t.length()){
		cout<<"NO\n";
		return;
	}

	for(int i=0; i< s.length(); i++){
		if(s[i] != t[t.length()-i-1]){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
