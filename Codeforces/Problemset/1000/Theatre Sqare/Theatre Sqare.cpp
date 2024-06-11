#include<iostream>
using namespace std;

int main(){
	//size n, amount of squares on n, size m, amount of squares on m, side of square, result
	long long n, ndiv, m, mdiv, square, total=0;

	//input
	cin>>n>>m>>square;

	//obtan the amount of squares per side
	ndiv = n/square;
	mdiv = m/square;

	//add to the total the number of whole frames
	total += ndiv * mdiv;

	//plenty of room for pictures in n
	if (n % square > 0){
		//plenty of room for pictures in n and m
		if (m % square > 0){

			total += ndiv; //amount of n
			total += mdiv; //amount of m
			total += 1; //amount of nm intersection

		}else{//plenty of room for pictures only in n

			total += mdiv; //amount of m
		}
	}else if(m % square > 0){//plenty of room for pictures only in m
		total += ndiv; //amount of n
	}

	cout<<total;

	return 0;
}