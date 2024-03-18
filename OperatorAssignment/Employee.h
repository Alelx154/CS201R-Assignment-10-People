#pragma once

#include "Staff.h"

class Employee : public Staff {
protected:
    float vacHours = 0;


public:
    Employee() : Staff() {
        type = 'E';
        vacHours = 0;
        totalEmployees++;
    }

    Employee(char t, string l, string f, int a, int h, float hr, float v) : Staff(t, l, f, a, h, hr) {
        type = 'T';
        vacHours = v;
        totalEmployees++;
    }

    float getVacHours() { return vacHours; }
    void setVacHours(float v) { vacHours = v; }

    void print() {
        cout << type << left << setw(4) << " "
            << setw(15) << lname
            << setw(15) << fname
            << setw(4) << right << age
            << setw(5) << hours << ", " << hrlyRate << ", " << vacHours << endl;
    }
    static int totalEmployees;


};