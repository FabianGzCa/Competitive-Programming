//Problem: https://codeforces.com/problemset/problem/110/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int cant=0;
	string number;
	cin>>number;
	for(int i=0; i<number.length(); i++){
		if(number[i] == '7' || number[i] == '4'){
			cant++;
		}
	}
	if(cant == 4 || cant == 7){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
