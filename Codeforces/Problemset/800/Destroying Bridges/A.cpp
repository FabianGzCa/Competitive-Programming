//Problem: https://codeforces.com/contest/1944/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt,n,k;
	cin>>tt;
	while(tt--){
		cin>>n>>k;
		cout<<((k > n-2)?"1\n" : to_string(n)+"\n");
	}
	return 0;
}
