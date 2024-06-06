#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int bear, bro, res=0;
	cin>>bear>>bro;
	while (bear <= bro){
		bear *=3;
		bro *= 2;
		res++;
	}
	cout<<res;

	return 0;
}