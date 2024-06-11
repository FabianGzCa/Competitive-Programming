#include<iostream>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);

	int inputs, cuts;
	string input;
	bool seguidos, pasado;

	cin>>inputs;

	for (int in=0; in < inputs; in++){
		seguidos=false;
		cuts=1;

		cin >> input;

		if (input[0]=='1'){//definir si el primer valor que nos dan es 0 o 1
			pasado = true;
		}else{
			pasado=false;
		}

		for (int letter=1; letter < input.size(); letter++){

			if ((input[letter]=='0') && pasado){//value is 0
			//dan 0 y el pasado es 1
				cuts++;
				pasado=false;

			}else if(input[letter]=='1' && !pasado){
				if(!seguidos){//no ha habido seguidos
					seguidos=true;
				}else{
					cuts++;
				}
				pasado=true;
			}
		}

		cout<<cuts<<"\n";
	}

	return 0;
}