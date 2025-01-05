// problem: https://codeforces.com/contest/1697/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(false);
	
	int testCases, n, energy, dist;
	cin>>testCases;
	while (testCases--){
		cin>>n;
		cin>>energy;

		while(n--){
			cin>>dist;
			energy-=dist;
		}
		if(energy<0){
			cout<<energy*-1;
		}else{
			cout<<0;
		}
		cout<<"\n";
	}
	return 0;
}