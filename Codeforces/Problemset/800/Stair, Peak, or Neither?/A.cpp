//Problem: 

#include<iostream>
using namespace std;

void solve(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a<b && b!=c){
		cout<<((b<c)?"STAIR\n":"PEAK\n");
	}else{
		cout<<"NONE\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
