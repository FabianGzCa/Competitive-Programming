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
	int p, past=1,res=0;
	cin>>p;
	vi towns(p);
	vi vis(p,1);
	for(int i=0; i<p; i++){
		cin>>towns[i];
	}
	while(vis[past-1]){
		res++;
		vis[past-1]=0;
		past = towns[past-1];
		
	}
	//
	cout<<res<<"\n";
}

int main(){
	solve();
	return 0;
}
