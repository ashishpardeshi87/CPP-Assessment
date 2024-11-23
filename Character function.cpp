#include<iostream>
#include<cctype>
using namespace std;

int main(){
  char ch='a';
  if(isalpha(ch)){
    cout<<ch<<"is a letter."<<endl;
    cout<<"Uppercase:"<<char(toupper(ch))<<endl;
  }
  
  return 0;
}