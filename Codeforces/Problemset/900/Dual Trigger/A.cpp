//Problem: https://codeforces.com/contest/1951/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	char cu;
	int n, unos=0;
	cin>>n;
	vector<int> lamps(n);
	for(int i=0; i<n; i++){
		cin>>cu;
		lamps[i]=cu;
		if(cu=='1')unos++;
	}

	if(unos==1){
		cout<<"NO\n";
	}else if(unos==2){
		for(int i=0; i<n; i++){
			if(lamps[i] == '1'){
				if(lamps[i+1] == '1'){
					cout<<"NO\n";
					return;
				}else{
					cout<<"YES\n";
					return;
				}
			}
		}
	}else if(unos&1){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
