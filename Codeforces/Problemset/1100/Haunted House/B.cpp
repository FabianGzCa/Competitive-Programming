//Problem: https://codeforces.com/contest/1884/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

void solve(){
	int n, ceros=0, unos=0;
	ll total=0;
	cin>>n;
	string bin;
	cin>>bin;
	for(int i=bin.size()-1; i>=0; i--){
		if(bin[i] == '0'){
			ceros++;
			total+=(ll)unos;
			cout<<total<<" ";
		}else{
			unos++;
		}
	}
	for(int i=0; i<unos; i++){
		cout<<"-1 ";
	}
	cout<<'\n';
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
