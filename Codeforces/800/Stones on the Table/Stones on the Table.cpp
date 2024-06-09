#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int colors, count=0;
	cin>>colors;
	char letter, pivot='Y';

	for (int i=0; i<colors; i++){
		cin>>letter;
		if (letter == pivot){
			count++;
		}
		pivot = letter;

	}
	cout<<count;

	return 0;
}