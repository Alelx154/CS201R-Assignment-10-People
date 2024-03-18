#pragma once

#include "Staff.h"

class Teacher : public Staff {
private:
    string subject;


public:
    Teacher() : Staff() {
        type = 'T';
        subject = " ";
        totalTeacher++;

    }
    Teacher(char t, string l, string f, int a, int h, float hr, string sub) : Staff(t, l, f, a, h, hr) {
        type = 'T';
        subject = sub;
        totalTeacher++;
    }
    string getSub() { return subject; }
    void setSub(string s) { subject = s; }
    void print() {
        cout << type << left << setw(4) << " "
            << setw(15) << lname
            << setw(15) << fname
            << setw(4) << right << age
            << setw(5) << hours << ", " << hrlyRate << ", " << subject << endl;
    }

    static int totalTeacher;
};