//Problem: https://codeforces.com/contest/1878/problem/C

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	long long n, k, x;
	cin>>n>>k>>x;
	cout<<((2*x>= k*(k+1) && 2*x<= n*(n+1)-(n-k)*(n-k+1))?"Yes\n":"No\n");
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
