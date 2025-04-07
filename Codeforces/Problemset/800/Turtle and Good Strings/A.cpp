//Problem: 

#include<iostream>
using namespace std;

void solve(){
	int am;
	char pri, ult;
	cin>>am;
	cin>>pri;
	while(--am){
		cin>>ult;
	}
	cout<<((pri==ult)?"No\n":"Yes\n");
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
