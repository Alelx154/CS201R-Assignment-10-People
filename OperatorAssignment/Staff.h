#pragma once

#include "Person.h"

class Staff : public Person {
protected:
    int hours;
    float hrlyRate;

public:
    Staff() : Person() {
        hours = 0;
        hrlyRate = 0.0;
    }
    Staff(char t, string l, string f, int a, int h, float hr) : Person(l, f, a) {
        type = ' ';
        hours = h;
        hrlyRate = hr;

    }
    int getHours() { return  hours; }
    float getHrlyRate() { return hrlyRate; }
    void setHours(int h) { hours = h; }
    void setHrlyRate(float hr) { hrlyRate = hr; }

    void print();
    static int totalStaff;
};