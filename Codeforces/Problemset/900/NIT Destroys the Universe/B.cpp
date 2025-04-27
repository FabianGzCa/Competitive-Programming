//Problem: https://codeforces.com/contest/1696/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, soloCeros=1, cu, anterior=0, intermedios=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		if(soloCeros && cu!=0){
			soloCeros=0;
		}
		if(anterior==0 && cu!=0){
			intermedios++;
		}


		anterior=cu;
	}

	if(soloCeros){
		cout<<"0\n";
	}else if(intermedios==1){
		cout<<"1\n";
	}else{
		cout<<"2\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
