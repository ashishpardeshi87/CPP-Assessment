#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0f;
        cout << "Default constructor called for Book." << endl;
    }

    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
        cout << "Parameterized constructor called for Book." << endl;
    }

    ~Book() {
        cout << "Destructor called for Book: " << title << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: ₹" << price << endl;
    }
};

int main() {
    Book book1;
    book1.display();

    Book book2("1984", "George Orwell", 15.99);
    book2.display();

    return 0;
}
