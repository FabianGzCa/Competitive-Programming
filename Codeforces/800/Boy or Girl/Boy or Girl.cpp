#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int letras=0;
	char car;
	bool chars[123] = {false};

	while (true){
		car = cin.get();
		if (car == '\n'){
			break;
		}
		if (!chars[car]){
			chars[car] = true;
			letras++;
		}
	}
	
	if(letras%2==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}


	return 0;
}