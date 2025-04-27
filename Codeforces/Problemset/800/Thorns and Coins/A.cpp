//Problem: https://codeforces.com/contest/1932/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, coins=0, seguidas=1;
	char cu, una='x', dos='x';
	cin>>n;
	for(int i=0; i<n; i++){
		una=dos;
		cin>>cu;
		dos=cu;
		if(una=='*' && dos=='*'){
			seguidas=0;
		}
		if(seguidas && cu=='@'){
			coins++;
		}
	}
	cout<<coins<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
