#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int lenArr, solutions;
	cin>> lenArr >> solutions;
	vector<long long> numbers, sum;
	for (int i=0; i<lenArr; i++){
		int number;
		cin>>number;
		numbers.push_back(number);
	}
	sum.push_back(numbers[0]);
	for(int i=1; i<lenArr; i++){
		sum.push_back(sum[i-1] + numbers[i]);
	}

	int a, b;
	cin>>a>>b;
	for(int i=0; i<solutions-1; i++){
		if (a != 0){
    		    cout<<sum[b-1]-sum[a-1]<<"\n";
    		}else{
    		    cout<<sum[b-1]<<"\n";
    		}
		cin>>a>>b;
	}
	if (a != 0){
    	cout<<sum[b-1]-sum[a-1]<<"\n";
   	}else{
   		cout<<sum[b-1]<<"\n";
    }


	return 0;
}