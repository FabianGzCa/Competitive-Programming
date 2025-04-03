// Problem: https://codeforces.com/contest/1633/problem/A

#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt, cadaNumero=0, s=0;
	cin>>tt;
	while (tt--){
		cin>>cadaNumero;
		if (cadaNumero%7==0){
			cout<<cadaNumero<<"\n";
			continue;
		}
		s=1;
		cadaNumero=cadaNumero-cadaNumero%10;
		while(s){
			if (cadaNumero%7 == 0){
				cout<<cadaNumero<<"\n";
				s=0;
			}else{
				cadaNumero+=1;
				cadaNumero = cadaNumero%1000;
			}
		}
	}
	return 0;
}

