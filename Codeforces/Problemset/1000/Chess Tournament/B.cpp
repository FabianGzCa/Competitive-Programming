//Problem: https://codeforces.com/contest/1569/problem/B

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, dos=0;
	cin>>n;
	vector<char> desiciones(n);
	int primerGanador=-1, cantGanadores=0;

	for(int i=0; i<n; i++){
		cin>>desiciones[i];
		if(desiciones[i]=='2'){
			dos++;
			if(primerGanador==-1){
				primerGanador=i;
			}
			cantGanadores++;
		}
	}

	if(dos==1 || dos==2){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	int cg=0;

	//2122


	for(int i=0; i<n; i++){
		int cantidadDoses=0, cantidadNegativos=cantGanadores, nohubo=1;
		for(int j=0; j<n; j++){
			if(i==j){
				if(desiciones[i]=='2'){
					cantidadDoses++;
				}
				cout<<"X";
			}else if(desiciones[i]=='2'){
				if(desiciones[j]=='1'){
					cout<<"=";
					cantidadDoses--;
				}else if(cg<cantGanadores-1 && cantidadDoses==cg+1){
					cout<<"+";
				}else if(cg<cantGanadores-1){
					if((j+1 ==i || j+1 == n) && nohubo){
						nohubo=0;
						cout<<"-";
					}else if(desiciones[j]=='1' || !nohubo){
						cout<<"=";
					}else{
						nohubo=0;
						cout<<"-";
					}
				}else if(cg==cantGanadores-1){
					if(j==primerGanador){
						cout<<"+";
					}else if((j+1 ==i || j+1 == n) && nohubo){
						cout<<"-";
						nohubo=0;
					}else if(desiciones[j]=='1' || !nohubo){
						cout<<"=";
					}else{
						nohubo=0;
						cout<<"-";
					}
				}
				cantidadDoses++;
			}else{
				cout<<"=";
			}
		}
		if(desiciones[i] == '2'){
			cg++;
		}
		cout<<"\n";
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int tt;
	cin>>tt;
	while(tt--) solve();
	return 0;
}
