//Problem: https://codeforces.com/problemset/problem/271/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int a, b, c, d, e;
	cin>>a;
	a++;
	while(1){
		b= a/1000;
		c= a/100;
		d= a/10;
		e= a;

		e-=d*10;
		d-=c*10;
		c-=b*10;

		if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e){
			cout<<a<<"\n";
			return;
		}
		a++;
	}

}

int main(){
	solve();
	return 0;
}
