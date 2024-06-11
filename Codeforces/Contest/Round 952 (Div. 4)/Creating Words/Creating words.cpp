#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	string w1, w2;

	int casos=0;
	cin>>casos;
	for (int i=0; i< casos; i++){
		cin>>w1>>w2;
		cout<<w2[0]<<w1[1]<<w1[2]<<" "<<w1[0]<<w2[1]<<w2[2]<<"\n";
	}

	return 0;
}