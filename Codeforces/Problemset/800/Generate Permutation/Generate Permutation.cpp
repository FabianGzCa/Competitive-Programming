// problem: https://codeforces.com/contest/2001/problem/B

#include<iostream>
using namespace std;
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int n, a, b;
	cin>>n;
	while(n--){
		cin>>a;

		if (a==1){
			cout<<1<<"\n";
		}else if (a%2 == 0){
			cout<<-1<<"\n";
		}else {
			b = a-1;
			while(a > 0){
				cout<<a<<" ";
				a-=2;
			}
			a+=1;
			while(a < b-2){
				a+=2;
				cout<<a<<" ";
			}
			cout<<a+2<<"\n";
		}
	}
	return 0;
}