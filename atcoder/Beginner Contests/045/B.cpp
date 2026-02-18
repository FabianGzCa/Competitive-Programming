#include<bits/stdc++.h>
using namespace std;
int main(){
    string A, B, C;
    cin>>A>>B>>C;
    char pas = 'a';
    while(1){
        if(pas == 'a'){
            if(A.length() == 0){
                cout<<"A\n";
                return 0;
            }
            pas = A[0];
            A.erase(0, 1);

        }else if (pas == 'b'){
            if(B.length() == 0){
                cout<<"B\n";
                return 0;
            }
            pas = B[0];
            B.erase(0, 1);

        }else{
            if(C.length() == 0){
                cout<<"C\n";
                return 0;
            }
            pas = C[0];
            C.erase(0, 1);

        }
    }
    return 0;
}