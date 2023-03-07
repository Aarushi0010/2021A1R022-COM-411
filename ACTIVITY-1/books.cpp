#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
private:
    int bookid;
    string title;
    string author;
    double price;
    int edition;
public:
    Book(int bookid, string title, string author, double price, int edition) {
        this->bookid = bookid;
        this->title = title;
        this->author = author;
        this->price = price;
        this->edition = edition;
    }

    void display() {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Edition: " << edition << endl << endl;
    }
};

class Bookstore {
private:
    vector<Book> books;
public:
    void add_book(int bookid, string title, string author, double price, int edition) {
        Book book(bookid, title, author, price, edition);
        books.push_back(book);
    }

    void display_books() {
        for (Book book : books) {
            book.display();
        }
    }
};

int main() {
    Bookstore bookstore;
    bookstore.add_book(1, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, 1);
    bookstore.add_book(2, "To Kill a Mockingbird", "Harper Lee", 12.99, 2);
    bookstore.add_book(3, "1984", "George Orwell", 8.99, 3);
    bookstore.display_books();
    return 0;
}
