#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int x,y;
	cin>>x>>y;

	for (int i=1; i<=x; i++){
		if (i%2 ==1){
			for(int j=1; j<=y; j++){
				cout<<"#";
			}
			cout<<"\n";
		}else if(i%4 == 0){
			cout<<"#";
			for(int j=1; j<y;j++){
				cout<<".";
			}
			cout<<"\n";
		}else{
			for(int j=1; j<y;j++){
				cout<<".";
			}
			cout<<"#\n";
		}
	}
	return 0;
}