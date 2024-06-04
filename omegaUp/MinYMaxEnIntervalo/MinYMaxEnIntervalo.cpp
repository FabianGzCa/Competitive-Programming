#include<iostream>
#include<climits>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tam, modify, primerNumero, segundoNumero, min, max;
	char tipo;
	cin>>tam>>modify;
	int nums[tam];
	for(int input=0; input<tam; input++){
		cin>>nums[input];
	}
	for(int cadaEntrada=0; cadaEntrada<modify; cadaEntrada++){
		cin>>tipo>>primerNumero>>segundoNumero;
		primerNumero--;
		if (tipo == 'A'){
			nums[primerNumero] = segundoNumero+1;
		}else{
			min=INT_MAX;
			max=0;
			for(primerNumero; primerNumero < segundoNumero;primerNumero++){
				if (nums[primerNumero] < min){
					min = nums[primerNumero];
				}
				if (nums[primerNumero] > max){
					max = nums[primerNumero];
				}
			}
			if (cadaEntrada<modify-1){
				cout<<min<<" "<<max<<"\n";
			}else{
				cout<<min<<" "<<max;
			}
		}
	}
	return 0;
}