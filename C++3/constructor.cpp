#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int classLevel; // Renamed from 'class' to 'classLevel' because class is reserved word for c++
    int roll;
    double cgpa;

    Student(int classLevel, int roll, double cgpa) {
        this->classLevel = classLevel;// (*this).classLevel and this-> both are same
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main() {
    Student Hridoy(11, 3, 3.39);
    Student Masud(13, 4, 3.30);

    cout << Hridoy.classLevel << " " << Hridoy.roll << " " << Hridoy.cgpa << endl;
    cout << Masud.classLevel << " " << Masud.roll << " " << Masud.cgpa << endl;

    return 0;
}
