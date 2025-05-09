//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	long long n;
	cin>>n;
	if(!(n%2)){
		cout<<n/2<<"\n";
	}else{
		cout<<(n/2+1) * -1<<"\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
