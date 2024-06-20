#include<iostream>
#include<vector>
using namespace std;

vector<vector<vector<int>>> dp(250, vector<vector<int>>(500, vector<int>(500, -1)));
string word;

int dpPar(int k, int x, int y){ //a,b k =2, x=0, y=1
	
	int k2=k/2;
	if (dp[k2][x][y] != -1){
		//cout<<"N-1: "<<x<<" "<<y<<" "<<k<<" :";
		//cout<<dp[k2][x][y]<<"\n";
		return dp[k2][x][y];
	}
	if(x>=y || k==0){
		dp[k2][x][y] = k;
		//cout<<"x>y: "<<x<<" "<<y<<" "<<k<<" :";
		//cout<<dp[k2][x][y]<<"\n";
		return k;
	}

	int x1=x+1, y1=y-1;

	if (dp[k2][x1][y] == -1){
		dp[k2][x1][y] = dpPar(k, x1, y);
	}
	if (dp[k2][x][y1] == -1){
		dp[k2][x][y1] = dpPar(k, x, y1);
	}

	dp[k2][x][y] = dpPar(k-2, x1, y1);

	if (word[x] == word[y]){
		//cout<<"Equ: "<<x<<" "<<y<<" "<<k<<" :";
		//cout<<dp[k2][x][y]<<"\n";
		return dp[k2][x][y];
	}
	dp[k2][x][y]++;

	dp[k2][x][y] = min(dp[k2][x][y], min(dp[k2][x1][y], dp[k2][x][y1]));
	cout<<"Min: "<<x<<" "<<y<<" "<<k<<" :";
	cout<<dp[k2][x][y]<<" | "<<dp[k2][x][y]<<" - "<<dp[k2][x1][y]<<" - "<<dp[k2][x][y1]<<"\n";
	return dp[k2][x][y];	
}

int dpImpar(int k, int x, int y){ //a,b k =2, x=0, y=1
	int k2=k/2;
	if (dp[k2][x][y] != -1){
		return dp[k2][x][y];
	}
	if(x>=(y-1) || k<1){
		dp[k2][x][y] = k;
		return k;
	}

	int x1=x+1, y1=y-1;

	if (dp[k2][x1][y] == -1){
		dp[k2][x1][y] = dpImpar(k, x1, y);
	}
	if (dp[k2][x][y1] == -1){
		dp[k2][x][y1] = dpImpar(k, x, y1);
	}

	dp[k2][x][y] = dpImpar(k-2, x1, y1);

	if (word[x] == word[y]){
		return dp[k2][x][y];
	}
	dp[k2][x][y]++;

	dp[k2][x][y] = min(dp[k2][x][y], min(dp[k2][x1][y], dp[k2][x][y1]));
	return dp[k2][x][y];	
}

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int length=0, k=0;
	cin>>length>>k;
	cin>>word;

	int res=0;
	
	if (k == 1){
		res = 0;
	}else{
		if (k%2 == 1){
			res=dpImpar(k-1, 0, length-1);
		}else{
			res=dpPar(k, 0, length-1);
		}
	}
	
	cout<<"Res: "<<res;

	return 0;
}