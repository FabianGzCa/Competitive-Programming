#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int testCases, val1, val2;

	cin>>testCases;

	while (testCases--){
		cin>>val1>>val2;

		if (val1>1){
			cout<<1<<endl;
		}else if(val2==2){
			cout<<3<<endl;
		}else{
			cout<<2<<endl;
		}

	}

	return 0;

}