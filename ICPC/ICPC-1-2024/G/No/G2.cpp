#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int cantidad, seguidos, datos[1000001];
	cin>>cantidad;

	for (int i=0; i < cantidad; i++){
		int number=0;
		cin>>number;
		datos[number] = number;
	}


	for (int i=1; i <= cantidad; i++){
		if (datos[i] == i){
			seguidos++;
		}else{
			break;
		}
	}

	if (seguidos % 2 == 1){
		cout<<"Alicius";
	}else{
		cout<<"Bobius";
	}
	
	return 0;
}