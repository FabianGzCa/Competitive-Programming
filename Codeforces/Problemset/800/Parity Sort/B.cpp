//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int t;
	cin>>t;
	vector<int> a(t);
	vector<int> b(t);
	for (int i=0; i<t; i++) cin>>a[i];
	b=a;
	sort(a.begin(), a.end());
	for(int i=0; i<t; i++){
		if((a[i]%2) != (b[i]%2)){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
