//Problem: https://codeforces.com/contest/1918/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, m;
	cin>>n>>m;
	cout<<(n*(m/2))<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
