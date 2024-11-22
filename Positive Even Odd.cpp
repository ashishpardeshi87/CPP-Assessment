#include <iostream> 
using  namespace  std ; 
int  main () { 
int  number; 
cout  <<  "Enter a number: " ; 
cin  >> number; 
if  (number >  0 ) { 
if  (number %  2  ==  0 ) { 
cout  <<  "The number is positive and even."  <<  endl ; 
}  else  { 
cout  <<  "The number is positive and odd."  <<  endl ; 
} 
}  else  { 
cout  <<  "The number is not positive."  <<  endl ; 
} 
return  0 ; 
}