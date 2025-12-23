#include<iostream>
using namespace std;
class Publication {
protected:
    string title;
    float price;
public:
     void getdata() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
    }
    
     void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int pageCount;
public:
    void getdata()  {
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    
    void putdata()  {
        Publication::putdata();
        cout << "Page count: " << pageCount << endl;
    }
};

class Tape : public Publication {
    float playingTime;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
    }
    
    void putdata() {
        Publication::putdata();
        cout << "Playing time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    
    Book book;
    Tape tape;
    
    cout << "Enter book data:\n";
    book.getdata();
    
    cout << "Enter tape data:\n";
    tape.getdata();
    
    cout << "Book Information\n";
    book.putdata();
    
    cout << " Tape Information\n";
    tape.putdata();
}