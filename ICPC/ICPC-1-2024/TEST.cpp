#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> vec(5);
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	vec[3] = 4;
	vec[4] = 5;
	for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout<<endl;
	
    next_permutation(vec.begin(), vec.end());

    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    
    next_permutation(vec.begin(), vec.end());
    cout<<endl;

    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    next_permutation(vec.begin(), vec.end());
    cout<<endl;

    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    next_permutation(vec.begin(), vec.end());
    cout<<endl;

    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}

