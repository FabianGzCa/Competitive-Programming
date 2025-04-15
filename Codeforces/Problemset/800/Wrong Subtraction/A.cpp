//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int a, b;
	cin>>a>>b;
	for(int i=0; i<b; i++){
		if(a%10 > 0){
			a--;
		}else{
			a/=10;
		}
	}
	cout<<a<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
