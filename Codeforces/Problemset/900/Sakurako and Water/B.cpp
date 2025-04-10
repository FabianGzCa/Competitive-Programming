//Problem: https://codeforces.com/contest/2033/problem/B

#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

void solve(){
	int n, cv, res=0;
	unordered_map<int, int> sea;
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>cv;
			if(cv<0){
				sea[i-j] = (sea.find(i-j) == sea.end())?cv:min(sea[i-j], cv);
			}
		}
	}
	for(auto& [key, val] : sea){
		res-=val;
	}
	cout<<res<<endl;
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
