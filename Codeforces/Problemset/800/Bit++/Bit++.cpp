#include<iostream>
using namespace std;

int main(){
	//variable for number of inputs,variable X of bit=++
	int inputs, x=0;
	char operation[4];

	//number of inputs
	cin>>inputs;

	//get all inputs
	for (int sequence=0; sequence < inputs; sequence++){
		//input
		cin>>operation;

		//verify addition or substraction
		if (operation[1] == '+'){
			x++;
		}else{
			x--;
		}
	}

	//print the result
	cout<<x;

	return 0;
}