// problem: https://codeforces.com/contest/1998/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int x, y, k, tt;
	cin>>tt;
	while(tt--){
		int z = 1, w = 1, si=0;
		cin>>x>>y>>k;
		
		int i=0, j=1;
		while (i < k - k % 2){
			i++;
			if (i%2 ){
				cout<<x<<" "<<y+j<<"\n";
			}else{
				cout<<x<<" "<<y-j<<"\n";
				j++;
			}
		}
		if(k & 1){
			cout<<x<<" "<<y<<"\n";
		}
	}
}