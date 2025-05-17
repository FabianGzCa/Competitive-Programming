//Problem: https://codeforces.com/problemset/problem/61/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	string c1, c2;
	cin>>c1; cin>>c2;
	for(int i=0; i<c1.size(); i++){
		if(c1[i] == c2[i]){
			cout<<"0";
		}else{
			cout<<"1";
		}
	}
	cout<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
