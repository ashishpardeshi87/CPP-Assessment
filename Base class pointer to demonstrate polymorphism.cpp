#include <iostream>
using namespace std;

class Animal {
public:
    virtual void display() const {
        cout << "I am an animal." << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void display() const override {
        cout << "I am a dog." << endl;
    }
};

class Cat : public Animal {
public:
    void display() const override {
        cout << "I am a cat." << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); 
    Animal* animal2 = new Cat();  

    animal1->display(); 
    animal2->display(); 

    delete animal1;
    delete animal2;

    return 0;
}
