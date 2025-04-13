//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int c, cn, res=0;
	cin>>c;
	for(int i=0; i<c; i++){
		cin>>cn;
		if(cn<0) res=cn;
		if(cn>res && res>=0) res=cn;
	}
	cout<<res<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
