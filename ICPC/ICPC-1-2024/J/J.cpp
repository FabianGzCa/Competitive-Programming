#include<iostream>
#include<vector>
using namespace std;

vector<vector<vector<int>>> dp(250, vector<vector<int>>(500, vector<int>(500, -1)));

int dpPar(string word, int k, int x, int y){ //a,b k =2, x=0, y=1
	int k2=k/2;
	if (dp[k2][x][y] != -1){
		return dp[k2][x][y];
	}
	if(x>=y || k<1){
		dp[k2][x][y] = k;
		return k;
	}

	int x1=x+1, y1=y-1;

	if (dp[k2][x1][y] == -1){
		dp[k2][x1][y] = dpPar(word, k, x1, y);
	}
	if (dp[k2][x][y1] == -1){
		dp[k2][x][y1] = dpPar(word, k, x, y1);
	}

	dp[k2][x][y] = dpPar(word, k-2, x1, y1);

	if (word[x] == word[y]){
		return dp[k2][x][y];
	}
	dp[k2][x][y]++;

	dp[k2][x][y] = min(dp[k2][x][y], min(dp[k2][x1][y], dp[k2][x][y1]));
	return dp[k2][x][y];	
}

int dpImpar(string word, int k, int x, int y){ //a,b k =2, x=0, y=1
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
		dp[k2][x1][y] = dpImpar(word, k, x1, y);
	}
	if (dp[k2][x][y1] == -1){
		dp[k2][x][y1] = dpImpar(word, k, x, y1);
	}

	dp[k2][x][y] = dpImpar(word, k-2, x1, y1);

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
	string word;
	cin>>word;

	int res=0;
	
	if (k == 1){
		res = 0;
	}else{
		if (k%2 == 1){
			res=dpImpar(word, k-1, 0, length-1);
		}else{
			res=dpPar(word, k, 0, length-1);
		}
	}
	
	cout<<res;

	return 0;
}