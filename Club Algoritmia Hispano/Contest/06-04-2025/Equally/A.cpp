//problem: https://vjudge.net/contest/707553#problem/A

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	if(a==b || a==c || b==c || a+b == c || a+c == b || a == b+c){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}

	return 0;
}
