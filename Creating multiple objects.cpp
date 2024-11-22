#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    void setDetails(string bookTitle, string bookAuthor, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        price = bookPrice;
    }

    void displayDetails() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: ₹" << price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Book book1, book2, book3;

    book1.setDetails("1984", "George Orwell", 9.99);
    book2.setDetails("To Kill a Mockingbird", "Harper Lee", 12.50);
    book3.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 10.75);

    book1.displayDetails();
    book2.displayDetails();
    book3.displayDetails();

    return 0;
}
