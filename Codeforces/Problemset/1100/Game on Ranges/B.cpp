//Problem: https://codeforces.com/contest/1623/problem/B

#include<iostream>
#include<vector>

void solve(){
	int n; std::cin>>n;
	std::vector<std::vector<bool>> existentes(n+1, std::vector<bool>(n+1));
	std::vector<int> leftNumbers(n), rightNumbers(n, false);

	for(int eachCoordinate=0; eachCoordinate<n; eachCoordinate++){
		int leftCoordinate=0, rightCoordinate=0;
		std::cin>>leftCoordinate>>rightCoordinate;
		leftNumbers[eachCoordinate] = leftCoordinate;
		rightNumbers[eachCoordinate] = rightCoordinate;
		existentes[leftCoordinate][rightCoordinate] = true;
	}

	for(int eachCoordinate=0; eachCoordinate<n; eachCoordinate++){
		for(int d=leftNumbers[eachCoordinate]; d<=rightNumbers[eachCoordinate]; d++){
			bool leftArrayExist = (d==leftNumbers[eachCoordinate]) ||
				(existentes[leftNumbers[eachCoordinate]][d-1]);
			bool rightArrayExist = (d==rightNumbers[eachCoordinate]) ||
				(existentes[d+1][rightNumbers[eachCoordinate]]);
			if (leftArrayExist && rightArrayExist){
				std::cout<<leftNumbers[eachCoordinate]<<" "<<rightNumbers[eachCoordinate]<<" "<<d<<"\n";
				break;
			}
		}
	}

	std::cout<<"\n";
}

int main(){
	std::cin.tie(0)->sync_with_stdio(0);
	int tt;
	std::cin>>tt;
	while(tt--) solve();
	return 0;
}