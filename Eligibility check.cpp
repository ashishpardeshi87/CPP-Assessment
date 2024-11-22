#include <iostream> 
using  namespace  std ; 
int  main () { 
int  age; 
cout  <<  "Enter your age: " ; 
cin  >> age; 
if  (age <  0 ) { 
cout  <<  "Invalid age entered!"  <<  endl ; 
}  else  if  (age <  18 ) { 
cout  <<  "You are a minor."  <<  endl ; 
}  else  if  (age <  60 ) { 
cout  <<  "You are an adult."  <<  endl ; 
}  else  { 
cout  <<  "You are a senior citizen."  <<  endl ; 
} 
return  0 ; 
} 