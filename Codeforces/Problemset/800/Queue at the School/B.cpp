//Problem: https://codeforces.com/problemset/problem/266/B

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int n, t;
	cin>>n>>t;
	vector<char> fila(n);
	for(int i=0; i<n; i++) cin>>fila[i];

	int brincar=0;
	for(int i=0; i<t; i++){
		brincar=0;
		for(int j=0; j<n-1; j++){
			if(brincar){
				brincar=0;
				continue;
			}

			if(fila[j] == 'B' && fila[j+1] == 'G'){
				swap(fila[j], fila[j+1]);
				brincar=1;
			}
		}
	}

	for(int i=0; i<n; i++){
		cout<<fila[i];
	}
	cout<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
