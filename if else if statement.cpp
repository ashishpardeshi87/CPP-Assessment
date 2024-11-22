#include <iostream> 
using  namespace  std ; 
int  main () { 
int  marks; 
cout  <<  "Enter your marks: " ; 
cin  >> marks; 
if  (marks >=  90 ) { 
cout  <<  "Grade: A"  <<  endl ; 
}  else  if  (marks >=  75 ) { 
cout  <<  "Grade: B"  <<  endl ; 
}  else  if  (marks >=  50 ) { 
cout  <<  "Grade: C"  <<  endl ; 
}  else  { 
cout  <<  "Grade: F"  <<  endl ; 
} 
return  0 ; 
}