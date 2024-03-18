#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include "Employee.h"
using namespace std;

int readFile(vector<Person>&, vector<Student>&,
	vector<Teacher>& teachers,
	vector<Employee>& employee,
	vector<Staff>&, vector<Person*>& all);
void printVector(vector<Person>);
void printVector(vector<Student>);
void printVector(vector<Teacher>);
void printVector(vector<Employee>);
void printVector(vector<Staff>);
void printVector(vector<Person*>);