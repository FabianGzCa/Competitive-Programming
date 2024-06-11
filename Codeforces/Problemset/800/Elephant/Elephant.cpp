#include<iostream>
using namespace std;
int main(){
	int in, ou, ou2;
	cin>>in;
	ou = in/5;
	if (in%5 != 0){
		ou++;
	}
	cout<<ou;
	return 0;
}