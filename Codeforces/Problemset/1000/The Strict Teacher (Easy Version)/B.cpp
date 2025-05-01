//Problem: https://codeforces.com/contest/2005/problem/B1

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, m, q, m1, m2;
	cin>>n>>m>>q;
	cin>>m1>>m2;
	cin>>q;

	//Pensar en que puede irse desplazando CASO:

	if(m1 > q && m2 < q ){
		cout<<(m1-m2)/2<<"\n";
	}else if(m2 > q && m1 < q){
		cout<<(m2-m1)/2<<"\n";
	}else if(m1 < q){
		cout<<n-max(m1, m2)<<"\n";
	}else if(m1 > q){
		cout<<min(m1,m2)-1<<"\n";
	}else{
		cout<<"Error\n";
	}

}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
