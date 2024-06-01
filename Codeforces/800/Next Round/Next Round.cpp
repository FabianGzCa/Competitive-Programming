#include<iostream>
using namespace std;

int main(){
	//amount of numbers, amount of valid numbers, input, past input
	int amount, total=0, min, number, pastNumber=0;

	//save values
	cin>>amount>>min;

	//recive values and calculate amount of valid numbers
	for (int iNumber=0; iNumber < amount; iNumber++){
		//input number
		cin>>number;

		//0 is invalid
		if (number > 0){
			//last numbers in the list, only if the smallest is equal
			if (number == pastNumber && min < 1){
				total++;
			}else if (min > 0){//every top numbers
				min--;
				pastNumber = number;
				total++;
			}else{break;}
		}else{break;}

	}

	//print
	cout<<total;

	return 0;
}