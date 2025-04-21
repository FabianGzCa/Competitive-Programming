//Problem: 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n, a=0, d=0;
	cin>>n;
	char play ='v';
	for(int i=0; i<n; i++){
		cin>>play;
		if(play=='A') a++;
		else d++;
		
	}

	if(a>d) cout<<"Anton\n";
	else if(a<d) cout<<"Danik\n";
	else cout<<"Friendship\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
