//Problem: https://codeforces.com/contest/1845/problem/B

#include<iostream>
using namespace std;

void solve(){
	int ax, ay, bx, by, cx, cy, res=1;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	if((bx > ax && cx > ax) || (bx < ax && cx < ax)){
		res += ((bx>ax && cx>ax)?min(bx,cx)-ax:(max(bx,cx)*(-1))+ax);
	}
	if((by > ay && cy > ay) || (by < ay && cy < ay)){
		res += ((by>ay && cy>ay)?min(by,cy)-ay:(max(by,cy)*(-1))+ay);
	}
	cout<<res<<endl;
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
