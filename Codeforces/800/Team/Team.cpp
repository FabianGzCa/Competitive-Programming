#include<iostream>
using namespace std;

int main(){
	//number of problems, number of solutions
	int problems, solutions=0;

	//save the amount of problems
	cin>>problems;

	for(int iProblem=0; iProblem < problems; iProblem++){
		//space for problems
		char num1, num2, num3;

		//save line
		cin>>num1>>num2>>num3;

		//check line
		if (num1-'0' + num2-'0' + num3-'0' > 1){
			solutions++;
		}
	}

	//output
	cout<<solutions;

	return 0;
}