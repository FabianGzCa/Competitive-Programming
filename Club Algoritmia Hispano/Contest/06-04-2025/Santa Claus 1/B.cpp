//Problem: https://vjudge.net/contest/707553#problem/B
#include<iostream>
using namespace std;

int main(){
	int H,W,X,Y;
	cin>>H>>W>>Y>>X;
	Y-=1;
	X-=1;
	char matrix[H][W];
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			cin>>matrix[i][j];
		}
	}

	char T[10001];
	cin>>T;

	int casas=0, cami=0;
	for (int i=0; T[i] != '\0'; i++){
		if(T[i] == 'U'){
			if(matrix[Y-1][X] == '.'){
				Y-=1;
				cami+=1;
			}else if (matrix[Y-1][X] == '@'){
				Y-=1;
				cami+=1;
				casas+=1;
				matrix[Y][X] = '.';
			}
		}else if(T[i] == 'D'){
			if(matrix[Y+1][X] == '.'){
				Y+=1;
				cami+=1;
			}else if (matrix[Y+1][X] == '@'){
				Y+=1;
				cami+=1;
				casas+=1;
				matrix[Y][X] = '.';
			}
		}else if(T[i] == 'L'){
			if(matrix[Y][X-1] == '.'){
				X-=1;
				cami+=1;
			}else if(matrix[Y][X-1] == '@'){
				X-=1;
				cami+=1;
				casas+=1;
				matrix[Y][X] = '.';
			}
		}else{
			if(matrix[Y][X+1] == '.'){
				X+=1;
				cami+=1;
			}else if(matrix[Y][X+1] == '@'){
				X+=1;
				casas+=1;
				cami+=1;
				matrix[Y][X] = '.';
			}
		}
	}
	cout<<Y+1<<" "<<X+1<<" "<<casas<<"\n";
	return 0;
}
