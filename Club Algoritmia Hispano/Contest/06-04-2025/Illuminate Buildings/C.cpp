//problem: https://vjudge.net/contest/707553#problem/C
#include<iostream>
using namespace std;

int main(){
	int p;
	cin>>p;
	int arr[p];
	int cont[3000] = {0};
	for (int i=0; i<p; i++){
		cin>>arr[i];
		cont[arr[i]-1]+=1;
	}

	int max=0,pos=0;
	for(int i=0; i < 3000; i++){
		if (cont[i] > max){
			max = cont[i];
			pos = i+1;
		}
	}

	for (int i=0; i< p< i++){
		if(arr[i] == 
	}
	
	return 0;
}

