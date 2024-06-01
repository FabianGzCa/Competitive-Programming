#include<iostream>
using namespace std;

int main(){
	int rows, columns, equal=0;

	//input dimensions
	cin>>rows>>columns;

	//a little math
	equal = rows/2 * columns;
	if (rows%2 == 0){
		cout<<equal;
	}else{
		cout<<equal + columns/2;
	}

	return 0;
}