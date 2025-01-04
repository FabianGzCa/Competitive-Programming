// problem: https://codeforces.com/contest/1781/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int inputs=0;
	cin>>inputs;
	while (inputs--){
		int w, d, h;
		int a, b, f, g;
		int ans;
		cin >> w >> d >> h;
		cin >> a >> b >> f >> g;

		ans = b + abs(a-f) + g;
		ans = min(ans, d-b + abs(a-f) + d-g);
		ans = min(ans, a + abs(b-g) + f);
		ans = min(ans, w-a + abs(b-g) + w-f);
		ans += h;
		cout<<ans<<"\n";
	}

	return 0;
}