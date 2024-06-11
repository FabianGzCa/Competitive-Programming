#include<iostream>
using namespace std;     
int main(){
	//value
	int w;
	//input number
	cin>>w;    	

	//if the number is 2, it can't
	if (w == 2){
		cout<<"NO";
	}else if (w % 2 == 0){//if the number is module 2, it can
		cout<<"YES";
	}else{ //if the number not is module 2, it can't
		cout<<"NO";
    }
	return 0;
}
