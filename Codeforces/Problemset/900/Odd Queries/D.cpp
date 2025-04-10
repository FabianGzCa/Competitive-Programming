//Problem: https://codeforces.com/contest/1807/problem/D

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int n, q, cn;
	cin>>n>>q;
	vector<int> sum(n+2);
	sum[0] =0;
	sum[n+1] =0;
	cin>>sum[1];
	for(int i=2; i<=n; i++){
		cin>>cn;
		sum[i] = sum[i-1] + cn;
	}

	while(q--){
		int x,y,k, val=0;
		cin>>x>>y>>k;
		//primeros datos
		val = sum[x-1];
		//datos centrales
		val += (y-x+1) * k;
		//datos finales
		val += sum[n]-sum[y];
		cout<<((val&1)?"Yes\n":"No\n");
	}
	
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
