#include<iostream>
#include<string>
using namespace std;

int main(){
	int amount=0;

	//amount of words
	cin>>amount;

	//array of words
	string words[amount];

	//save all words
	for (int iWord=0; iWord<amount; iWord++){
		cin>>words[iWord];
	}

	//save again words > length 10 with format in the array
	for (int iWord=0; iWord<amount; iWord++){
		int wordLength = words[iWord].length();
		if (wordLength > 10){
			words[iWord] = words[iWord][0] + to_string(wordLength-2) + words[iWord][wordLength-1];
		}
	}

	//print array
	for (int iWord=0; iWord<amount; iWord++){
		cout<<words[iWord]<<endl;
	}

	return 0;
}