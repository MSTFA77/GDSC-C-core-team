#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Abstract class Book
class Book {
protected:
    string title;
    string author;
    int bookID;
    bool isAvailable;

public:
    Book(string t, string a, int id) : title(t), author(a), bookID(id), isAvailable(true) {}

    virtual void printDetails() = 0; // Pure virtual function

    void changeAvailability() {
        isAvailable = !isAvailable;
    }

    int getBookID() {
        return bookID;
    }

    bool checkAvailability() {
        return isAvailable;
    }
};

// Derived class PrintedBook from Book
class PrintedBook : public Book {
public:
    PrintedBook(string t, string a, int id) : Book(t, a, id) {}

    void printDetails() override {
        cout << "Printed Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << "\nAvailable: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

// Derived class DigitalBook from Book
class DigitalBook : public Book {
private:
    string fileFormat;

public:
    DigitalBook(string t, string a, int id, string format) : Book(t, a, id), fileFormat(format) {}

    void printDetails() override {
        cout << "Digital Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << "\nAvailable: " << (isAvailable ? "Yes" : "No") << "\nFile Format: " << fileFormat << endl;
    }
};

// Abstract class Member
class Member {
protected:
    string name;
    int memberID;
    vector<int> borrowedBooks;

public:
    Member(string n, int id) : name(n), memberID(id) {}

    virtual void printDetails() = 0; // Pure virtual function

    void borrowBook(int bookID) {
        borrowedBooks.push_back(bookID);
    }

    void returnBook(int bookID) {
        borrowedBooks.erase(remove(borrowedBooks.begin(), borrowedBooks.end(), bookID), borrowedBooks.end());
    }

    int getMemberID() {
        return memberID;
    }
};

// Derived class RegularMember from Member
class RegularMember : public Member {
public:
    RegularMember(string n, int id) : Member(n, id) {}

    void printDetails() override {
        cout << "Member ID: " << memberID << "\nName: " << name << "\nBorrowed Books: ";
        for (int bookID : borrowedBooks) {
            cout << bookID << " ";
        }
        cout << endl;
    }
};

// Derived class PremiumMember from Member
class PremiumMember : public Member {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, double fee) : Member(n, id), membershipFee(fee) {}

    void printDetails() override {
        cout << "Premium Member ID: " << memberID << "\nName: " << name << "\nBorrowed Books: ";
        for (int bookID : borrowedBooks) {
            cout << bookID << " ";
        }
        cout << "\nMembership Fee: $" << membershipFee << endl;
    }
};

class Library {
private:
    vector<Book*> books;
    vector<Member*> members;

public:
    void addBook(Book* book) {
        books.push_back(book);
    }

    void addMember(Member* member) {
        members.push_back(member);
    }

    void displayBooks() {
        for (Book* book : books) {
            book->printDetails();
        }
    }

    void displayMembers() {
        for (Member* member : members) {
            member->printDetails();
        }
    }

    void borrowBook(int memberID, int bookID) {
        for (Book* book : books) {
            if (book->getBookID() == bookID && book->checkAvailability()) {
                for (Member* member : members) {
                    if (member->getMemberID() == memberID) {
                        member->borrowBook(bookID);
                        book->changeAvailability();
                        cout << "Book borrowed successfully!" << endl;
                        return;
                    }
                }
            }
        }
        cout << "Book or Member not found, or Book not available!" << endl;
    }

    void returnBook(int memberID, int bookID) {
        for (Book* book : books) {
            if (book->getBookID() == bookID && !book->checkAvailability()) {
                for (Member* member : members) {
                    if (member->getMemberID() == memberID) {
                        member->returnBook(bookID);
                        book->changeAvailability();
                        cout << "Book returned successfully!" << endl;
                        return;
                    }
                }
            }
        }
        cout << "Book or Member not found, or Book already available!" << endl;
    }
};

int main() {
    Library library;

    // Adding Books
    library.addBook(new PrintedBook("The Great Gatsby", "F. Scott Fitzgerald", 1));
    library.addBook(new PrintedBook("1984", "George Orwell", 2));
    library.addBook(new PrintedBook("To Kill a Mockingbird", "Harper Lee", 3));

    // Adding Digital Book
    library.addBook(new DigitalBook("Digital Fortress", "Dan Brown", 4, "PDF"));

    // Adding Members
    library.addMember(new RegularMember("Alice", 1));
    library.addMember(new RegularMember("Bob", 2));

    // Adding Premium Member
    library.addMember(new PremiumMember("Charlie", 3, 99.99));

    // Displaying Books and Members
    cout << "Library Books:\n";
    library.displayBooks();

    cout << "\nLibrary Members:\n";
    library.displayMembers();

    // Borrowing and Returning Books
    library.borrowBook(1, 1);
    library.returnBook(1, 1);

    return 0;
}
