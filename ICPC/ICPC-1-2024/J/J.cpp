#include<iostream>
using namespace std;

int dpPar(string word, int k, int x, int y){ //a,b k =2, x=0, y=1
	if(x>=y || k<1){
		return k;
	}

	if (word[x] == word[y]){
		return dpPar(word, k-2, x+1, y-1);
	}

	int num1, num2, num3, num4;
	num1 = dpPar(word, k-2, x+1, y-1) + 1;

	num2 = dpPar(word, k, x+1, y);
	num3 = dpPar(word, k, x, y-1);
	num4 = min(num1, min(num2, num3));
	return num4;	
}

int dpImpar(string word, int k, int x, int y){ //a,b k =2, x=0, y=1
	if(x>=(y-1) || k<1){
		return k;
	}

	if (word[x] == word[y]){
		return dpImpar(word, k-2, x+1, y-1);
	}

	int num1, num2, num3, num4;
	num1 = dpImpar(word, k-2, x+1, y-1) + 1;

	num2 = dpImpar(word, k, x+1, y);
	num3 = dpImpar(word, k, x, y-1);
	num4 = min(num1, min(num2, num3));
	return num4;	
}

int main(){
	//cin.tie(0)->sync_with_stdio(0);

	int length=0, k=0;
	cin>>length>>k;
	string word;
	cin>>word;

	int res=0;
	
	if (k == 1){
		res = 0;
	}else{
		if (k%2 == 1){
			res=dpImpar(word, k-1, 0, length-1);
		}else{
			res=dpPar(word, k, 0, length-1);
		}
	}
	
	cout<<res;

	return 0;
}