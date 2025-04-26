//Problem: https://codeforces.com/contest/2085/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, k;
	cin>>n>>k;
	string palabra, inversa="";
	cin>>palabra;
	char letra=palabra[0];
	for(int i=0; i<n; i++){
		inversa+=palabra[n-i-1];
		if(palabra[i] != letra){
			letra='0';
		}
	}
	if(letra=='0' && k>0) cout<<"YES\n";
	else if(palabra < inversa){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
