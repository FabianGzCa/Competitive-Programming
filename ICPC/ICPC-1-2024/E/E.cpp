#include<iostream>
using namespace std;

int main(){
	int val1=0, val2=0, val3=0;
	cin>>val1>> val2>> val3;
	
	for(int i=1; i <= val3; i++ ){
		if (i != val3){
			cout<<val1*i+val2<<" ";
		}else{
			cout<<val1*i+val2;
		}
	}
}
