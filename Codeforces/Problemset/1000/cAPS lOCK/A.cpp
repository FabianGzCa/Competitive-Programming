//Problem: https://codeforces.com/contest/131/problem/A

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

void solve(){
	string word, res="";
	cin>>word;
	int regular=0;
	for(int i=1; i<word.size(); i++){
		if((int)word[i] > 90) regular=1;
	}
	if(regular){
		cout<<word;
	}else{
		for(int i=0; i<word.size(); i++){
			if (word[i] < 91){
				cout<<(char)tolower(word[i]);
			}else{
				cout<<char(toupper(word[i]));
			}
		}
	}
	cout<<"\n";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
