#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says: Meow Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    cout << "Animal 1 says: ";
    animal1->speak();  

    cout << "Animal 2 says: ";
    animal2->speak();  

    delete animal1;
    delete animal2;

    return 0;
}
