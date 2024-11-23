#include<iostream>
using namespace std;

void updateValue(int num){
  num=100;
  cout<<"Inside function,num:"<<num<<endl;
}
int main(){
  int value=50;
  cout<<"Before function call,value:"<<value<<endl;
  updateValue(value);
  cout<<"After function call,value:"<<value<<endl;
  return 0;
}