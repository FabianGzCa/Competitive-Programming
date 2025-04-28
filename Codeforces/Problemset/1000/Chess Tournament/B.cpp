//Problem: https://codeforces.com/contest/1569/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	// Input
	int n, totalTwo=0;
	cin>>n;
	vector<char> partidas;
	char cu;
	for(int i=0; i<n; i++){
		cin>>cu;
		partidas.push_back(cu);

		if(cu=='2'){ //
			totalTwo++;
		}
	}

	// Solution when 1/2 select 2
	if(totalTwo==1 || totalTwo==2){
		cout<<"NO\n";
		return;
	}else{//else, is possible
		cout<<"YES\n";
	}

	//output if it's possible

	int numeroDos=0;

	for(int i=0; i<n; i++){

		int cantDosPorFila=0;
		if(partidas[i] == '2'){
			numeroDos++;
		}

		for(int j=0; j<n; j++){//print the matrix

			if(partidas[j] == '2'){
				cantDosPorFila++;
			}

			if(i==j){ // X case
				cout<<"X";
				continue;
			}

			if(partidas[i]=='1'){//If the player selects 1, all matches result in a draw.
				cout<<"=";
				continue;
			}

			if(partidas[j]=='1'){//If playing against someone who selected 1, the match results in a draw.
				cout<<"=";
				continue;
			}

			
			//+ case
			if(numeroDos!=totalTwo){//No es el ultimo 2 (ultima fila)
				if(cantDosPorFila == numeroDos+1){ //El siguiente 2 en columna al 2 de la fila actual.
					cout<<"+";
					continue;
				}
			}else{//Es el ultimo 2 (ultima fila)
				if(cantDosPorFila==1){//Para el primer 2 que encuentra
					cout<<"+";
					continue;
				}
			}

			// - & =
			if(numeroDos!=1){//No es el primer 2 (primera fila)
				if( cantDosPorFila == numeroDos-1){
					cout<<"-";
				}else{
					cout<<"=";
				}
			}else{//Es el primer 2 (primera fila)
				if(cantDosPorFila == totalTwo){//Si es el ultimo 2 de la fila
					cout<<"-";
				}else{
					cout<<"=";
				}
			}

			
		}
		cout<<"\n"; //Terminamos una fila
	}


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
