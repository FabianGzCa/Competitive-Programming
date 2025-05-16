//Problem: https://codeforces.com/contest/2009/problem/C

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x, xres, y, yres, k, res=0;
	cin>>x>>y>>k;
	xres = x/k;
	yres = y/k;

	//Suma 1 en caso de tener residuos, esto
	//se puede simplificar en la max() sumandole k-1, por lo que en cualquier
	//caso de que sobre 1 o más números, al sumarle k-1 sobrepasara la siguiente
	//division de k
	//max((2* (xres + k-1) )-1, 2*( yres + k-1));
	xres += (x%k?1:0);
	yres += (y%k?1:0);

	res = max((2*xres)-1, 2*yres);

	cout<<res<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
