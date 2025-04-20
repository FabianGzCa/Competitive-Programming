//Problem: https://codeforces.com/contest/2094/problem/D
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
	string golpes, sonidos;
	cin>>golpes;
	cin>>sonidos;
	int i=0, j=0;

	if(golpes[0] != sonidos[0]){
		cout<<"No\n";
		return;
	}

	while(i < golpes.size() or j < sonidos.size()){
		if(i == golpes.size() || j == sonidos.size()){
			cout<<"No\n";
			return;
		}
		int ig=i, js=j;
		while(golpes[i] == golpes[ig]) i++;
		while(sonidos[j] == sonidos[js]) j++;

		if((j-js < i -ig) || (j-js > (i - ig) * 2)){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
	

	//Hace mañana ambas soluciones.
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
