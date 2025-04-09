//Problem: https://codeforces.com/contest/1795/problem/A

#include<iostream>
#include<string>
using namespace std;

void solve(){
	int a, b;
	cin>>a>>b;
	string t1,t2;
	cin>>t1>>t2;

	int consecutivas=0;
	char buff = 'c', hallada='0';

	for(int i=0; i<a; i++){
		if(buff == t1[i]){
			consecutivas++;
			hallada='1';
		}
		buff = t1[i];
	}
	buff='c';
	for(int i=0; i<b; i++){
		if(buff == t2[i]){
			consecutivas++;
			hallada='2';
		}
		buff = t2[i];
	}
	if (consecutivas > 1){
		cout<<"No\n";
		return;
	}
	if(t1[a-1] == t2[b-1] && consecutivas==1){
		cout<<"No\n";
	}else{
		cout<<"Yes\n";
	}

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
