//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, h, cu, res;
	cin>>n>>h;
	res=n;
	for(int i=0; i<n; i++){
		cin>>cu;
		if(cu>h) res++;
	}
	cout<<res<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
