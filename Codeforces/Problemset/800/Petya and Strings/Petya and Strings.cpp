#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char firstWord[101],secondWord[101];
	cin>>firstWord;
	cin>>secondWord;

	for (int letter=0; letter<strlen(firstWord); letter++){
		if (firstWord[letter] < 97){
			firstWord[letter] = firstWord[letter]+32;
		}
	}

	for (int letter=0; letter<strlen(secondWord); letter++){
		if (secondWord[letter] < 97){
			secondWord[letter] = secondWord[letter]+32;
		}
	}

	cout<<strcmp(firstWord,secondWord);

	return 0;
}