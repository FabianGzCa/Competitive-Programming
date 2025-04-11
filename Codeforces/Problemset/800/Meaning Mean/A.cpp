//Problem: https://codeforces.com/contest/2021/problem/A

#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

void solve(){
	int n, cv, res;
	cin>>n;
	multiset<int> elements;
	for(int i=0; i<n; i++){
		cin>>cv;
		elements.insert(cv);
	}

	while(elements.size() > 1){
		int cont=0;
		auto it1 = elements.begin();
		auto it2 = next(it1);
		res = *it1+*it2;
		elements.erase(it1);
		elements.erase(it2);
		elements.insert(res/2);
	}
	cout<<*elements.begin()<<endl;


}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
