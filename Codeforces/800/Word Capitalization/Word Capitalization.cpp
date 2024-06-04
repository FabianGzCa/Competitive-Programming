#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	char letra;
	letra = cin.get();
	if (letra > 96){
		cout<<char(letra-' ');
	}else{
		cout<<letra;
	}
	letra = cin.get();
	while(letra != '\n'){
		cout<<letra;
		letra = cin.get();
	}
}