//Problem: https://codeforces.com/contest/2074/problem/A

#include<iostream>
using namespace std;

void solve(){
	int l,r,d,u;
	cin>>l>>r>>d>>u;
	cout<<((l==r && r==d && d==u) ? "Yes\n":"No\n");
}


int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
