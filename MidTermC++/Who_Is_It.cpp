#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    string name;
    char section;
    int totalMarks;
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student students[3];

        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        Student* bestStudent = &students[0];

        for (int i = 1; i < 3; ++i) {
            if (students[i].totalMarks > bestStudent->totalMarks ||
                (students[i].totalMarks == bestStudent->totalMarks && students[i].id < bestStudent->id)) {
                bestStudent = &students[i];
            }
        }

        cout << bestStudent->id << " " << bestStudent->name << " " << bestStudent->section << " " << bestStudent->totalMarks << endl;
    }

    return 0;
}
