#include<iostream>
using namespace std;

int main(){
	int amount, player1, player2, player3, summation=0;
	cin>>amount;
	int results[amount];

	//input, calculate and save results on 'results' array
	for (int inputs=0; inputs < amount; inputs++){
		//input
		cin>>player1>>player2>>player3;

		//all numbers are at 0
		if (player3 == 0){
			results[inputs] = 0;
			continue;
		}


		summation = player1 +player2 + player3;

		//verify consistent or inconsistent 
		if (summation % 2 == 1){//inconsistent
			results[inputs] = -1;
		}else{//consistent
			int division = summation/2, p1p2 = player1+player2;
			//use of the ternary operator
			results[inputs] = ( division < p1p2) ? division : p1p2;//consistent result
		}
	}

	//print result
	summation = amount-1;
	for (int inputs=0; inputs < summation; inputs++){
		cout<<results[inputs]<<endl;
	}
	cout<<results[summation];

	return 0;
}