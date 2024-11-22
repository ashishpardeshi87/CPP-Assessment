#include <iostream> 
using namespace std; 

class Student {  
public:  
    string name;  
    int age;  
    
    void display() {  
        // 'class' is a keyword 
        // 'public' is a keyword 
        // 'string' is a type, not a 
        // 'int' is a keyword 
        // 'void' is a keyword 
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl; 
    } 
}; 

int main() {  
    Student s1;  
    s1.name = "John"; 
    s1.age = 20; 
    s1.display();  
    return 0;  
}  
// 'int' and 'main' are keywords 
// 'Student' is a user-defined class
// Function call
// 'return' is a keyword
