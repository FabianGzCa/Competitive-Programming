//Problem: https://codeforces.com/problemset/problem/1030/A

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

void solve(){
	int n, cu, h=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		if(cu){
			h=cu;
		}
	}
	if(h){
		cout<<"HARD\n";
	}else{
		cout<<"EASY\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
