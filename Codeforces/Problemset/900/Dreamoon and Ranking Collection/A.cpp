//Problem: https://codeforces.com/contest/1330/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int n, x, cu;
	cin>>n>>x;
	vector<int> pasados(300,0);
	for(int i=0; i<n; i++){
		cin>>cu;
		pasados[cu]=1;
	}
	int i=0;
	x+=1;
	while(x){
		i++;
		if(!pasados[i]){
			x--;
		}
	}
	i--;
	cout<<i<<"\n";

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
