//Problem: https://codeforces.com/contest/2047/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, cu, cara=1, cubo=1, total=0, felices=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		total+=cu;
		while(total>cubo){
			cara+=2;
			cubo = cara*cara;
		}
		if(total==cubo) felices++;
	}
	cout<<felices<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
