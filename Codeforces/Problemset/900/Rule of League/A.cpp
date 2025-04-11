//Problem: https://codeforces.com/contest/1733/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, x, y;
	cin>>n>>x>>y;
	if(x!=0 & y!=0 || x==0 && y==0){
		cout<<"-1\n";
		return;
	}
	x = max(x,y);
	if ( (n-1)%x > 0){
		cout<<"-1\n";
		return;
	}

	int actual=1, first=1;

	for(int i=1; i<n; i++){
		cout<<actual<<" ";
		if(i%x == 0){
			if(first){
				first=0;
				actual+=1;
			}
			actual+=x;
		}
	}
	cout<<endl; 
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
