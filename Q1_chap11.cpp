#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    virtual void getdata() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }


};

class Book : public Publication {
    int pages;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void putdata() {
        Publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Publication {
    float playtime;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter play time (minutes): ";
        cin >> playtime;
    }

    void putdata() {
        Publication::putdata();
        cout << "Play Time: " << playtime << " minutes" << endl;
    }
};

int main() {
    Publication* p[2];
    int choice;

    for(int i = 0; i < 2; i++) {
        cout << "\nEnter 1 for Book, 2 for Tape: ";
        cin >> choice;

        if(choice == 1)
            p[i] = new Book;
        else
            p[i] = new Tape;

        p[i]->getdata();
    }


    for(int i = 0; i < 2; i++) {
        p[i]->putdata();
        cout << endl;
    }

    return 0;
}
