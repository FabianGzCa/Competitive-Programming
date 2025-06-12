//Problem: https://codeforces.com/contest/2114/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k, c=0, u=0, maxi, mini;
	cin>>n>>k;
	char s[n];
	for(int i=0; i<n; i++){
		cin>>s[i];
		if(s[i]=='0')c++;
		else u++;
	}
	maxi = c/2 + u/2;
	mini = (max(c,u) - min(c,u)) /2;

	if(k==mini || k==maxi) cout<<"Yes\n";
	else if (!(n&1) && mini!=0 && mini&1 && !(k&1)) cout<<"No\n";
	else if (!(n&1) && (!(mini&1) || mini == 0) && k&1) cout<<"No\n";
	else if (k>=mini && k<=maxi) cout<<"Yes\n";
	else cout<<"No\n";


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
