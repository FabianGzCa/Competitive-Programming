// problem: https://codeforces.com/contest/1633/problem/A

#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt, c;
	cin>>tt;
	while(tt--){
		cin>>c;
		if(!(c%7)){
			cout<<c<<"\n";
		}else{
			for(int i=0; i<8;i++){
				c = ((c-c%10 + i)% 7)? c : (c-c%10+i);
			}
			cout<<c<<"\n";
		}
	}
}
