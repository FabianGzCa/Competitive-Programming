//Problem: https://codeforces.com/contest/1720/problem/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	long long a, b, c, d, x, y;
	cin>>a>>b>>c>>d;
	x = a*d;
	y = b*c;
	if(x==y){
		cout<<"0\n";
	}else if((x!=0 && y%x==0) || (y!=0 && x%y==0)){
		cout<<"1\n";
	}else{
		cout<<"2\n";
	}
	

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n; cin>>n;
	while(n--) solve();
	return 0;
}