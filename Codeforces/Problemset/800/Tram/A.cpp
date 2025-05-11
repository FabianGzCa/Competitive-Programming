//Problem: https://codeforces.com/problemset/problem/116/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, ex, in, total=0, max=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>ex>>in;
		total-=ex;
		total+=in;
		if(total>max) max=total;
	}
	cout<<max<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
