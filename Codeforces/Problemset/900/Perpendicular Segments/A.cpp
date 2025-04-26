//Problem: https://codeforces.com/contest/2026/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int x, y, k, mn;
	cin>>x>>y>>k;
	mn = min(x,y);
	cout<<"0 0 "<<mn<<" "<<mn<<"\n";
	cout<<"0 "<<mn<<" "<<mn<<" 0\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
