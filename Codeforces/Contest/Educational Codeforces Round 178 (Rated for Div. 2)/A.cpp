//Problem: https://codeforces.com/contest/2104/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	 c -= b-a;
	 if( c<b || (c-b) % 3 != 0){
	 	cout<<"NO\n";
	 }else{
	 	cout<<"YES\n";
	 }
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
