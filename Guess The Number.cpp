#include <iostream> 
using  namespace  std ; 
int  main () { 
int  secret =  7 , guess; 
cout  <<  "Guess the secret number (1-10): " ; 
while  ( true ) { 
cin  >> guess; 
if  (guess == secret) { 
cout  <<  "You guessed it right!"  <<  endl ; 
break ;  // Exit loop 
}  else  { 
cout  <<  "Try again: " ; 
} 
} 
return  0 ; 
}