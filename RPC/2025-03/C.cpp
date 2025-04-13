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
	int f1, f2,res=0;
	cin>>f1>>f2;

	for(int i=f1; i<=f2; i++){
		int raiz = sqrt(i);
		if(raiz*raiz == i){
			res+=15;
		}
	}
	cout<<res<<"\n";
}

int main(){
	solve();
	return 0;
}
