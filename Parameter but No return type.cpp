#include<iostream>
using namespace std;

void displayMessage(string name){
  cout<<"Hello,"<<name<<"! Wellcome to C++."<<endl;
}

int main(){
  string userName;
  cout<<"Enter your name:";
  cin>>userName;
  displayMessage(userName);
  return 0;
}