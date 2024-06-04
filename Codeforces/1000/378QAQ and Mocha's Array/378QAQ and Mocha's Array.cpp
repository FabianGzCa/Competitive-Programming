#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0) -> sync_with_stdio(0);

	int inputs, nElements, inNumber, min;
	

	cin>>inputs;
	
	for(int input=0; input < inputs; input++){
		cin>>nElements;
		int a[nElements];
		vector<int> b;

		for(int number=0; number<nElements; number++){
			cin>>inNumber;
			a[number] = inNumber;
		}
		sort(a, a+nElements);
		min=a[0];
		for(int number=1; number<nElements; number++){
			if(a[number]%min){//!=0 is true
				b.push_back(a[number]);
			}
		}

		int bSize = b.size();
		for(int number=1; number < bSize; number++){
			if (b[number]%b[0]){
				cout<<"No\n";
				break;
			}else if(number == bSize-1){
				cout<<"Yes\n";
			}
		}
		if (b.size() < 2){
			cout<<"Yes\n";
		}

	}

	return 0;
}