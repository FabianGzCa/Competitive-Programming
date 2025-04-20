#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<bitset>

using namespace std;

#define all(x) x.begin(), x.end()
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define se second

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vpii = vector<pair<int, int>>;

void solve(){
	int n, cn, pri;
	cin>>n;
	vi res(2*n);
	pri = ((n*2)*((n*2)+1))/2;
	for(int rows=1; rows<=n; rows++){
		for (int columns=1; columns<=n; columns++){
			cin>>cn;
			if(rows==1 || columns==n){
				pri-=cn;
				res[rows+columns -1]=cn;
			}
		}
	}
	cout<<pri;
	for(int i=1; i<n*2; i++){
		cout<<" "<<res[i];
	}
	cout<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
