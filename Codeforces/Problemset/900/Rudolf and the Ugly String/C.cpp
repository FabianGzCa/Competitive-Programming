//Problem: https://codeforces.com/contest/1941/problem/C

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int cc, res=0;
	cin>>cc;
	char x='v', y='v', a='v', b='v', c='v';
	for(int i=0; i<cc; i++){
		x=y;
		y=a;
		a=b;
		b=c;
		cin>>c;
		string word="";
		if((a=='p' && b=='i' && c=='e') || (a=='m' && b=='a' && c=='p')){
			res++;
		}
		if(x=='m' && y=='a' && a=='p' && b=='i' && c=='e'){
			res--;
		}

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
