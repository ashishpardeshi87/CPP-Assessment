#include <iostream> 
using  namespace  std ; 
int  main () { 
int  n, factorial =  1 ; 
cout  <<  "Enter a positive number: " ; 
cin  >> n; 
for  ( int  i =  1 ; i <= n; i++) { 
factorial *= i;  // Multiply i to factorial 
} 
cout  <<  "The factorial of "  << n <<  " is "  <<  factorial <<  endl ; 
return  0 ; 
}