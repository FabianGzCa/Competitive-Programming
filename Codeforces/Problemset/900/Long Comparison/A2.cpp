//Problem: 

#include<iostream>
using namespace std;

void solve(){
	long long x, y;
	int xd, yd, mn;
	cin>>x>>xd>>y>>yd;
	mn = min(xd,yd);
	xd-=mn;
	yd-=mn;

	if(xd > 7){
		cout<<">\n";
	}else if (yd > 7){
		cout<<"<\n";
	}else{
		for(int i=1; i <= xd; i++) x*=10;
		for(int i=1; i <= yd; i++) y*=10;

		if(x>y){
			cout<<">\n";
		}else if(y>x){
			cout<<"<\n";
		}else{
			cout<<"=\n";
		}
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
