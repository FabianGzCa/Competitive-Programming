//Problem: 

#include<iostream>
using namespace std;

int digitos(int numero){
	int digitos=0;
	while(numero>0){
		digitos++;
		numero /= 10;
	}
	return digitos;
}

int mayorQue(int x, int y){
	while(x<=1000000){
		x*=10;
	}
	while(y<=1000000){
		y*=10;
	}
	if(x>y){
		return 1;
	}
	return 0;
}

void solve(){
	int x, xd, y, yd;
	cin>>x>>xd>>y>>yd;

	xd += digitos(x);
	yd += digitos(y);
	if(xd>yd){
		cout<<">\n";
	}else if(yd>xd){
		cout<<"<\n";
	}else{
		if(mayorQue(x,y)){
			cout<<">\n";
		}else if(mayorQue(y,x)){
			cout<<"<\n";
		}else{
			cout<<"=\n";
		}
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	int a=9, b=10;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
