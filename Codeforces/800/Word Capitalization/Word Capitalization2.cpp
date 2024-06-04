#include<iostream>
using namespace std;
int main(){
	char word[1001];
	int caracter=1;
	cin.getline(word, 1001);
	if(word[0] > 96){
		cout<<char(word[0]-32);
	}else{
		cout<<word[0];
	}

	while(true){
		if (word[caracter] == '\0'){
			break;
		}
		cout<<word[caracter];
		caracter++;
	}
}