//Problem: https://codeforces.com/contest/1793/problem/A
#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	long long tt, a, b, c, d, x, y;
	cin>>tt;
	while (tt--){
		cin>>a>>b>>c>>d;
		if (c > d){
			x = (c / (d+1)) * a * d;
			if (a > b){
				x+= ((c%(d+1)) * b);
			}else{
				x+= ((c%(d+1)) * a);
			}
		}else{
			x = a * c;
		}
		y = b * c;
		cout<<min(x, y)<<"\n";
	}

	return 0;
}
