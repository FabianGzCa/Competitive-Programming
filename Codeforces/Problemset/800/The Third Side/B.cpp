//Problem: https://codeforces.com/contest/2074/problem/B

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt, c, cn;
	long long suma;
	cin>>tt;

	while(tt--){
		cin>>c;
		suma=1-c;
		while(c--){
			cin>>cn;
			suma+=cn;
		}
		cout<<suma<<"\n";
	}
	
	return 0;
}
