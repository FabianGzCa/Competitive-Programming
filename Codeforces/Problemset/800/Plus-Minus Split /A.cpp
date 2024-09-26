#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int testCases;
	cin>>testCases;

	while (testCases--){
		int ammountValues;
		cin>>ammountValues;
		char values[ammountValues];
		cin>>values;
		int result=0;
		for (int i=0; i < ammountValues; i++){
			if (values[i] == '+'){
				result++;
			}else{
				result--;
			}
		}
		if (result < 0){
			result *= -1;
		}
		cout<<result<<endl;
	}

	return 0;
}