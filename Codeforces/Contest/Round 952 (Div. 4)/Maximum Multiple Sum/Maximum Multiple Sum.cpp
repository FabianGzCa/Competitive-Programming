#include<iostream>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int casos=0, w1=0, sum=0, count=0;
	cin>>casos, w1;
	for (int i=0; i< casos; i++){
		sum =0;
		count=0;
		cin>>w1;
		if (w1 == 3){
			cout<<3<<"\n";
		}else if (i==casos-1){
			cout<<2;
		}else{
			cout<<2<<"\n";
		}
	}

	return 0;
}