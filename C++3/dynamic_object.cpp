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
Student *fun()
{
    Student *rahim=new Student(9,12,3.22);
    return rahim;
}
int main() {
   
   Student *ans= fun();
   cout<<ans->roll<<" "<<ans->classLevel<<" "<<ans->cgpa;
  // delete ans;

       return 0;
}
