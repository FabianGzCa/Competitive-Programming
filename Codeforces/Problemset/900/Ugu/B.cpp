//Problem: https://codeforces.com/contest/1732/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, res=0, diez=0;
	cin>>n;
	string binarios;
	cin>>binarios;

	for(int i=0; i<n-1; i++){
		if(binarios[i]=='1' && binarios[i+1]=='0'){
			diez++;
		}
	}
	if(diez>0){
		res= diez*2-1;
		if(binarios[n-1] == '1'){
			res++;
		}
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
