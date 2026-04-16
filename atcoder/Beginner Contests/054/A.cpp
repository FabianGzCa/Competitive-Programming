#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b; cin>>a>>b;
  int win=0;
  if(a==1 &&b!=1){
    win=1;
  }else if(b==1 && a!= 1){
    win=2;
  }else if(a<b){
    win=2;
  }else if(b<a){
    win=1;
  }else{
    cout<<"?";
    win=0;
  }
  if(win == 1){
    cout<<"Alice\n";
  }else if(win==2){
    cout<<"Bob\n";
  }else{
    cout<<"Draw\n";
  }
  return 0;
}