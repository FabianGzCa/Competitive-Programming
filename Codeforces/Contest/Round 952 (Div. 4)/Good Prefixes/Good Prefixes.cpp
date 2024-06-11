#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int casos, tamanio, conteo;

	long long suma, max;
	cin>>casos;

	for (int i=0; i<casos; i++){
		suma=0;
		max=0;
		conteo=0;
		cin>>tamanio;
		int entrada;

		//1,000,000,000 1,000,000,000 1,000,000,000 1,000,000,000 1,000,000,000 1,000,000,000 294,967,296

		for (int j=0; j<tamanio; j++){
			cin>>entrada;
			if (entrada > max){
				suma = suma + max;
				max = entrada;
			}else{
				suma = suma + entrada;
			}
			if (suma == max){
				conteo++;
			}

		}

		if(i==casos-1){
			cout<<conteo;
		}else{
			cout<<conteo<<"\n";
		}

	}

	return 0;
}