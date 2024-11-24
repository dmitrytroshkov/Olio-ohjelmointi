

#include <iostream>
#include <memory>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    // Setterit
    void setName(string n) {
        name = n;
    }

    void setStudentNumber(int s) {
        studentNumber = s;
    }

    void setAverage(double a) {
        average = a;
    }

    // Getterit
    string getName() {
        return name;
    }

    int getStudentNumber() {
        return studentNumber;
    }

    double getAverage() {
        return average;
    }
};

int main() {

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Dmitry T");
    student->setStudentNumber(777777777);
    student->setAverage(3.0);


    cout << "Name: " << student->getName() << endl;
    cout << "Student Number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;


    return 0;
}
