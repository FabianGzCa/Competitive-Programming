//Problem: https://codeforces.com/problemset/problem/467/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, cu1=0, cu2=0, res=0; cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu1>>cu2;
		if(cu2-cu1>1){
			res++;
		}
	}
	cout<<res<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
