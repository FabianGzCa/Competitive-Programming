//Problem: https://codeforces.com/contest/1977/problem/A

#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);

	int tt,a,b;
	cin>>tt;
	while(tt--){
		cin>>a>>b;
		cout<<((a>=b && (a%2==b%2))? "Yes\n" : "No\n");
	}

	return 0;
}
