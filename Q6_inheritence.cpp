// 6.	Student Activities (Hybrid Inheritance) 
// Construct a hybrid inheritance program where Student provides basic details, Sports and Academics add respective scores, 
// and Result inherits from both to compute a final combined performance score.
 
#include <iostream>
using namespace std;


class Student {
protected:
    int roll;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void showStudentDetails() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
    }
};


class Sports : virtual public Student {
protected:
    int sportsScore;

public:
    void getSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};


class Academics : virtual public Student {
protected:
    int academicScore;

public:
    void getAcademicScore() {
        cout << "Enter Academic Score: ";
        cin >> academicScore;
    }
};


class Result : public Sports, public Academics {
public:
    void calculateResult() {
        int total = sportsScore + academicScore;
        float average = total / 2.0;

        showStudentDetails();
        cout << "\nAcademic Score: " << academicScore;
        cout << "\nSports Score: " << sportsScore;
        cout << "\nFinal Performance Score: " << average;
    }
};


int main() {
    Result r;

    r.getStudentDetails();
    r.getAcademicScore();
    r.getSportsScore();
    r.calculateResult();

    return 0;
}
