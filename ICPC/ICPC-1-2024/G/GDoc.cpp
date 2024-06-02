#include<iostream>
using namespace std;

int main(){
	// Mejorar tiempo
	// Improve time
	cin.tie(0)->sync_with_stdio(0);

	//cantidad de datos en entrada, cantidad de numeros consecutivos, arreglo para guardar la entrada
	//number of input data, number of consecutive numbers, array to store the input
	int cantidad, seguidos, datos[1000001];
	cin>>cantidad;

	//Guardar la entrada por teclado ya ordenada en el arreglo datos
	//Save the input on datos array
	for (int i=0; i < cantidad; i++){
		int number=0;
		cin>>number;
		datos[number] = number;
	}

	// Contar los números consecutivos
	// Count the consecutive numbers
	for (int i=1; i <= cantidad; i++){
		if (datos[i] == i){
			seguidos++;
		}else{
			break;
		}
	}

	// Calcular y imprimir quién ganó
	// Calculate and print who won
	if (seguidos % 2 == 1){
		cout<<"Alicius";
	}else{
		cout<<"Bobius";
	}

	return 0;
}