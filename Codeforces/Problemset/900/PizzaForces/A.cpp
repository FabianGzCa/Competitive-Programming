//Problem: 

#include<iostream>
using namespace std;

void solve(){
	long long a;
	cin>>a;
	a += ((a%2 ==0)?0:1);
	if (a <= 6){
		cout<<15<<"\n";
	}else{
		cout<<(a/2*5)<<"\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
