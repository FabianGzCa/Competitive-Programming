#include<iostream>
#include<cstring>
using namespace std;

int main(){
	//var
	char str[101];
	int one=0, two=0, three=0, sum=0;

	//input 
	cin>>str;

	//count amount of numbers and + simbols
	for(int caracter=0; caracter < strlen(str); caracter++){
		if (str[caracter] == '1'){
			one++;
		}else if(str[caracter] == '2'){
			two++;
		}else if(str[caracter] == '3'){
			three++;
		}else{
			sum++;
		}
	}

	//output 1+
	for (one; one > 0; one-- ){
		cout<<'1';
		if(sum > 0){
			cout<<'+';
			sum--;
		}
	}
	//output 2+
	for (two; two > 0; two-- ){
		cout<<'2';
		if(sum > 0){
			cout<<'+';
			sum--;
		}
	}
	//output 3+
	for (three; three > 0; three-- ){
		cout<<'3';
		if(sum > 0){
			cout<<'+';
			sum--;
		}
	}

	return 0;
}