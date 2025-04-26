//Problem: https://codeforces.com/contest/1856/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

void solve(){
	int n, cn;
	long long sumatoria=0, comprobacion, unos=0, otros=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cn;
		if(cn==1) unos++;
		else otros++;
		sumatoria+= (long long) cn;
	}
	if(n==1){
		cout<<"No\n";
		return;
	}
	comprobacion = unos*2 + otros;
	if(sumatoria<comprobacion) cout<<"No\n";
	else cout<<"Yes\n";

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
