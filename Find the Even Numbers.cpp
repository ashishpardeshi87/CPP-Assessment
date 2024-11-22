#include <iostream> 
using  namespace  std ; 
int  main () { 
int  i =  1 , n; 
cout  <<  "Enter a number: " ; 
cin  >> n; 
cout  <<  "Even numbers from 1 to "  << n <<  ": " ; 
do  { 
if  (i %  2  ==  0 ) { 
cout  << i <<  " " ; 
} 
i++; 
}  while  (i <= n); 
return  0 ; 
} 