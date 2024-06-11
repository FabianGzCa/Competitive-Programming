#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int casos, x, y, primeroX, primeroY, ultimoX, ultimoY;
	


	cin>>casos;

	for (int i=0; i<casos; i++){
		cin>>x>>y; //yyyyyyyyy
		string cuadro[x];
		bool fue=false;
		for (int j=0; j<x; j++){
			cin>>cuadro[j];
		}
		primeroX=0; primeroY=0; ultimoX=0; ultimoY;
		
		for (int j=0; j<x; j++){
			for(int k=0; k<y; k++){
				if (cuadro[j][k] == '#'){
					primeroX = j;
					primeroY = k;
					fue = true;
					break;
				}
			}
			if (fue){
				break;
			}

		}

		for (int j=x-1; j > 0; j--){
			if (cuadro[j][primeroY] == '#'){
				ultimoX = j;
				break;
			}
		}
		primeroX = int((primeroX + ultimoX+2)/2);
		if (i == casos-1){
			cout<<primeroX<<" "<<primeroY+1;
		}else{
			cout<<primeroX<<" "<<primeroY+1<<"\n";
		}
	}

	return 0;
}