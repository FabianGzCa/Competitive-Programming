#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int tt,ali,bob;
	cin>>tt;
	while(tt--){
		cin>>ali>>bob;
		cout<< (((ali+bob)%2)? "Alice\n":"Bob\n");
	}

	return 0;
}

