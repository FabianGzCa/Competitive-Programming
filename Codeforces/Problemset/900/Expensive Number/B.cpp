//Problem: https://codeforces.com/contest/2093/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int nums=0, ceros=0;
	char cn;
	while( cin.get(cn) && cn != '\n'){
		if(cn != '0') ceros=0;
		if(cn == '0') ceros++;
		else nums++;
	}
	nums-=1;
	nums+=ceros;
	cout<<nums<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	cin.ignore();
	while(tt--) solve();
	return 0;
}
