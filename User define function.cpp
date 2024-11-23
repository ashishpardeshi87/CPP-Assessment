#include<iostream>
using namespace std;

int addNumbers(int a,int b){
  return a+b;
}
int main(){
  int num1,num2;
  cout<<"Enter two numbers:";
  cin>>num1>>num2;
  int sum=addNumbers(num1,num2);
  cout<<"The sum is:"<<sum<<endl;
  return 0;
}
