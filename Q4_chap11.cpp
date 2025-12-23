#include <iostream>
using namespace std;

class Publication {
public:
    virtual bool isOversize() = 0;
};

class Book : public Publication {
    int pages;
public:
    Book(int p) :pages(p)
    {  }
    bool isOversize() {
        return pages > 800;
    }
};

class Tape : public Publication {
    float time;
public:
    Tape(float t):time(t) 
    { }
    bool isOversize() {
        return time > 90;
    }
};

int main() {
    Publication* p1 ;
    Publication* p2; 
    Book b(800);
    Tape t(180);
p1=&b;

    if(p1->isOversize())
        cout << "Book is Oversize\n";
p2=&t;
    if(p2->isOversize())
        cout << "Tape is Oversize\n";

    return 0;
}
