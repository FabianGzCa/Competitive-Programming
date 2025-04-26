//Problem: https://codeforces.com/contest/1738/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	long long res=0;
	int n, cu;
	cin>>n;
	vector<int> tipo(n), ceros, unos;
	for(int i=0; i<n; i++) cin>>tipo[i];
	for(int i=0; i<n; i++){
		cin>>cu;
		if(tipo[i]) unos.push_back(cu);
		else ceros.push_back(cu);
	}
	sort(ceros.begin(), ceros.end());
	sort(unos.begin(), unos.end());
	
	if(ceros.size() == unos.size()) res -= (long long) min(*ceros.begin(), *unos.begin());

	while(!ceros.empty() && !unos.empty()){
		res+= ((long long) ceros.back() + (long long) unos.back() )*2;
		ceros.pop_back(); unos.pop_back();
	}
	for(long long otro: ceros) res+= otro;
	for(long long otro: unos) res+= otro;
	cout<<res<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}