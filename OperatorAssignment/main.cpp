// CS201Wk8PersonClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include "Function.h"
#include "Student.h"
#include "Teacher.h"
#include "Employee.h"


//add Static Member initialization
int Teacher::totalTeacher = 0;
int Person::totalPeople = 0;
int Student::totalStudents = 0;
int Employee::totalEmployees = 0;


int main()
{
    //create a vector of Person type
    vector<Person> myPeeps;
    vector<Student> myStudents;
    vector<Teacher> myTeachers;
    vector<Employee> myEmployees;
    vector<Staff> myStaff;
    vector<Person*> allPeople;

    // read the file & load into vector of Personal type
    readFile(myPeeps, myStudents, myTeachers, myEmployees, myStaff, allPeople);

    Person newP;
    newP.setLName("Wonka");
    newP.setFName("Willy");
    newP.setAge(30);

    myPeeps.push_back(newP);
    Person newP2("Mahomes", "Patrick", 25);
    myPeeps.push_back(newP2);

    // print the vector
    printVector(myPeeps);
    printVector(myStudents);
    printVector(myStaff);
    printVector(myEmployees);
    printVector(allPeople);

    //print total people (static variable from class)
}