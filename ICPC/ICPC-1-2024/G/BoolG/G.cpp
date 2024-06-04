#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	bool datos[1000001];
	int cantidad, seguidos=0;
	cin>>cantidad;
	for (int i=0; i < cantidad; i++){
		int number=0;
		cin>>number;
		datos[number] = true;
	}
	for (int i=1; i <= cantidad; i++){
		if (datos[i]){
			seguidos++;
		}else{
			break;
		}
	}
	if (seguidos % 2 == 1){
		cout<<"Bobius";
	}else{
		cout<<"Alicius";
	}
	return 0;
}