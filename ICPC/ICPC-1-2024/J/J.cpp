#include<iostream>
using namespace std;

int dpPar(string word, int k, int x, int y){ //a,b k =2, x=0, y=1
	
	if (word[x] == word[y]){
		if (k-2 <= 0){
			return 0;
		}
		return dpPar(word, k-2, x+1, y-1);
	}

	int p1, p2, p3;

	return min(p1, min(p2, p3));
}

int main(){
	//cin.tie(0)->sync_with_stdio(0);

	int length=0, k=0;

	cin>>length>>k;

	string word;

	for(int i=0; i<k; i++){
		cin>>word[i];
	}
	cout<<"a\n";
	int res=0;
	res =dpPar(word, k, 0, length-1);
	cout<<res<<"RES";

	return 0;
}