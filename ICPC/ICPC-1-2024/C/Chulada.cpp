#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector<lli> D(3), d(3);
	cin >> D[0] >> D[1] >> D[2];
	cin >> d[0] >> d[1] >> d[2];
	vector<int> pi = {0, 1, 2};
	lli ans = 0;
	do{
		ans = max(ans, (D[0] / d[pi[0]]) * (D[1] / d[pi[1]]) * (D[2] / d[pi[2]]));
	}while(next_permutation(pi.begin(), pi.end()));
	cout << ans << "\n";
	return 0;
}
