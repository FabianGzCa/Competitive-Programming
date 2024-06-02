#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int L, W, H, K, Q, F, mayor=0, pibote=0;
	cin>>L>>W>>H;
	cin>>K>>Q>>F;
	mayor = (L/K) * (W/Q) * (H/F);
	pibote = (L/K) * (H/Q) * (W/F);
	if( pibote > mayor){
		mayor = pibote;
	}
	pibote = (L/Q) * (W/K) * (H/F);
	if( pibote > mayor){
		mayor = pibote;
	}
	pibote = (L/Q) * (H/K) * (W/F);
	if( pibote > mayor){
		mayor = pibote;
	}
	pibote = (L/F) * (W/K) * (H/Q);
	if( pibote > mayor){
		mayor = pibote;
	}
	pibote = (L/F) * (H/K) * (W/Q);
	if( pibote > mayor){
		mayor = pibote;
	}
	cout<<mayor;
	return 0;
}
