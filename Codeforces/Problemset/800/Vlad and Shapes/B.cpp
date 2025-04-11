//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, res=0;
	char cu='v', ant2='v', ant1='v';
	cin>>n;
	for(int rows=0; rows<n; rows++){
		for(int columns=0; columns<n ;columns++){
			ant2=ant1;
			ant1=cu;
			cin>>cu;

			if((ant1=='1') && (ant2=='0') && (cu=='0')){
				res =1;
			}
		}
	}
	cout<<((res)?"TRIANGLE\n":"SQUARE\n");
}


int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
