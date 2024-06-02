#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int cantidad, anterior=0, seguidos;
	cin>>cantidad;
	int datos[cantidad];

	for (int i=0; i < cantidad; i++){
		cin>>datos[i];
	}

	sort(datos, datos+cantidad);

	for (int i=0; i < cantidad; i++){
		if (datos[i] == anterior+1){
			seguidos++;
			anterior = datos[i];
		}else if(datos[i] == anterior){
			continue;
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