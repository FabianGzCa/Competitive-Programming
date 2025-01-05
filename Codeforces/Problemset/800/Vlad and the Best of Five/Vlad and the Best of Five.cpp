// problem: https://codeforces.com/contest/1926/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(false);
	int testCases, res;
	cin>>testCases;

	while(testCases--){
		string word;
		cin>>word;
		res=0;
		for (int i=0; i<5; i++){
			if (word[i] == 'A'){
				res++;
			}else{
				res--;
			}
		}
		if (res >0){
			cout<<"A\n";
		}else{
			cout<<"B\n";
		}
	}

	
	return 0;
}