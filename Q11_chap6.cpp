#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class fraction {
private:
    int num, den;    
 
    void lowterms() {
        long tnum, tden, temp, gcd;

        tnum = labs(num);
        tden = labs(den);

        if(tden == 0) {
            cout << "Illegal fraction: division by 0"; 
            exit(1);
        }
        else if(tnum == 0) {
            num = 0;
            den = 1;
            return;
        }

        while(tnum != 0) {
            if(tnum < tden) {
                temp = tnum; 
                tnum = tden; 
                tden = temp;
            }
            tnum = tnum - tden;
        }

        gcd = tden;
        num = num / gcd;
        den = den / gcd;
    }

public:
    
    fraction() : num(0), den(1) {}
    fraction(int n, int d) : num(n), den(d) { lowterms(); }


    void getFraction() {
        char slash;
        cout << "Enter fraction (a/b): ";
        cin >> num >> slash >> den;
        lowterms();
    }


    void showFraction() const {
        cout << num << "/" << den;
    }


    fraction operator + (fraction f) const {
        fraction temp;
        temp.num = num * f.den + den * f.num;
        temp.den = den * f.den;
        temp.lowterms();
        return temp;
    }

    fraction operator - (fraction f) const {
        fraction temp;
        temp.num = num * f.den - den * f.num;
        temp.den = den * f.den;
        temp.lowterms();
        return temp;
    }

    fraction operator * (fraction f) const {
        fraction temp;
        temp.num = num * f.num;
        temp.den = den * f.den;
        temp.lowterms();
        return temp;
    }

    fraction operator / (fraction f) const {
        fraction temp;
        temp.num = num * f.den;
        temp.den = den * f.num;
        temp.lowterms();
        return temp;
    }
};
int main() {
    fraction f1, f2, result;
    char op;

    cout << "\nEnter first fraction:\n";
    f1.getFraction();

    cout << "\nEnter operation (+ - * /): ";
    cin >> op;

    cout << "\nEnter second fraction:\n";
    f2.getFraction();

    cout << "\nResult = ";

    switch(op) {
        case '+': result = f1 + f2; break;
        case '-': result = f1 - f2; break;
        case '*': result = f1 * f2; break;
        case '/': result = f1 / f2; break;
        default: 
            cout << "Invalid operator"; 
            return 0;
    }

    result.showFraction();
    cout << endl;

    return 0;
}
