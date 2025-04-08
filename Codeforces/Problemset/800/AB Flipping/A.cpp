//Problem: https://codeforces.com/contest/1896/problem/B

#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int c, ptrizq=-1, ptrder=-1, diff=0;
	cin>>c;
	vector<char> arr(c);
	for(int i=0; i<c; i++){
		cin>>arr[i];
		if(arr[i] == 'B'){
			ptrder=i;
		}
		if(ptrizq<0 && arr[i] == 'A'){
			ptrizq=i;
		}
	}
	diff=ptrder-ptrizq;
	cout<<((ptrizq<0 || diff < 0)?"0\n":to_string(diff)+"\n");
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
