//Problem: https://codeforces.com/contest/230/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int s,n, p1, p2;
	cin>>s>>n;
	vector<pair<int, int>> dragons;
	for(int i=0; i<n; i++){
		cin>>p1>>p2;
		dragons.push_back({p1, p2});
	}

	sort(dragons.begin(), dragons.end());

	for(int i=0; i<n; i++){
		if (s > (*(dragons.begin()+i)).first){
			s+= (*(dragons.begin()+i)).second;
		}else{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
