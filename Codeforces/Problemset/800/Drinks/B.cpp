//Problem: https://codeforces.com/problemset/problem/200/B

#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;

void solve(){
	int n;
	double cu, sum;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>cu;
		sum+=cu;
	}
	cout<<fixed<<setprecision(7)<<(sum/(100*n))*100<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
