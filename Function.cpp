#include<iostream>
using namespace std;

int add(int a,int b){
  return a+b;
}

int main(){
  int num1=5,num2=10;
  
  int result=add(num1,num2);
  cout<<"Sum is:"<<result<<endl;
  return 0;
}