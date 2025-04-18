//Problem: https://codeforces.com/contest/2042/problem/B

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
	int n, color, unos=1, otros=0;
	cin>>n;
	vector<int> colors(1001,0);

	for(int i=0; i<n; i++){
		cin>>color;
		colors[color]++;
	}

	for(int i=0; i<1001; i++){
		if(colors[i] == 0){
			continue;
		}

		if(colors[i] == 1){
			unos++;
		}
		if(colors[i] > 1){
			otros++;
		}

	}
	if(unos%2){
		unos--;
	}
	otros+= unos;
	cout<<otros<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
