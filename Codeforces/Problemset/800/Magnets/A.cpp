//Problem: https://codeforces.com/problemset/problem/344/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, p=1;
	cin>>n;
	char cu, ant='2';
	for(int i=0; i<n*2; i++){
		cin>>cu;
		if(cu==ant){
			p++;
		}
		ant=cu;
	}
	cout<<p<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
