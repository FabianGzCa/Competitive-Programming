#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//Saved X, Saved Y
	int x=0, y=0;
	char number;

	//route to the y
	for(int yPath=1; yPath<6; yPath++){
		//variable reset
		int xPath = 1;

		//route to the x
		for(xPath; xPath<6; xPath++){
			cin>>number;

			//1 located
			if (number == '1'){
				x = xPath;
				y = yPath;

				//save requests
				break;
			}
		}
	}

	//a little math for the result
	cout<< abs(3-x)+abs(3-y);


	return 0;
}