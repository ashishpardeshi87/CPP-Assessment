#include <iostream> 
using  namespace  std ; 
int  main () { 
int  n, sum =  0 ; 
cout  <<  "Enter a positive number: " ; 
cin  >> n; 
for  ( int  i =  1 ; i <= n; i++) { 
sum += i;  // Add i to sum 
} 
cout  <<  "The sum of numbers from 1 to "  << n <<  " is "  << sum << 
endl ; 
return  0 ; 
} 